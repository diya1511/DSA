#include <bits/stdc++.h>
using namespace std;
class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

Node* Detectcycle(Node* head){
    if(head ==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow!= NULL && fast != NULL){
        fast= fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
Node* StartingPoint(Node* head){
    if(head ==NULL){
        return NULL;
    }
    Node* Intersection =Detectcycle(head);
      if(Intersection == NULL)
        return NULL;
    Node* slow = head;
    while(slow!=Intersection){
        slow=slow->next;
        Intersection=Intersection->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
     if(head ==NULL){
        return NULL;
    }
    Node* startloop=StartingPoint(head);
    if(startloop == NULL)
        return head;
    Node* temp= startloop;
    while(temp->next != startloop){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}