#include<iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
  class LinkedListNode
    {
    public:
        int data;
        LinkedListNode<int> *next;
        LinkedListNode(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{  
    if(head==NULL || head->next == NULL ){
    return head;
}
   LinkedListNode<int>* prev = NULL;
   LinkedListNode<int>* curr= head ;
  while(curr != NULL){
     LinkedListNode<int>* forward = curr->next;
     curr->next= prev;
     prev = curr;
     curr= forward;
 }
 return prev;
}