 #include <bits/stdc++.h>
using namespace std;
class Node {

        public:
        int data;
        Node* next;
        Node* arb;
        Node(int data) {
            next = NULL;
            arb = NULL;
            this->data = data;
        }
};
class Solution{

    private:
    void insertatTail(Node* &head , Node* &tail , int d){
        Node* temp = new Node(d);
        if(head == NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    public:
    Node *copyList(Node *head)
    {
       //clone 
       Node* clonehead = NULL;
       Node* clonetail = NULL;
       Node* temp = head;
       while(temp!= NULL){
           insertatTail(clonehead,clonetail,temp->data);
           temp= temp->next;
       }
       
       //mapping 
       unordered_map<Node*, Node*>oldtonew;
       temp= head ;
       Node* temp2 = clonehead;
       while(temp!= NULL && temp2!=NULL){
           oldtonew[temp]=temp2;
           temp=temp->next;
           temp2=temp2->next;
       }
       
       //random node 
       temp= head ;
       temp2 = clonehead;
       while(temp!= NULL && temp2!=NULL){
           temp2->arb = oldtonew[temp->arb];
           temp=temp->next;
           temp2=temp2->next;
       }
       return clonehead;
    }

};