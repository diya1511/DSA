#include <bits/stdc++.h>
using namespace std;
class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
Node* sortList(Node *head)
{
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
   Node* curr = head;
    while(curr!=NULL){
        if(curr->data == 0){
            cnt0++;
        }
        else if(curr->data == 1){
            cnt1++;
        }
        else if(curr->data == 2){
            cnt2++;
        }
       curr=curr->next;
    }
  curr=head;
 while(curr!=NULL){
     if(cnt0 != 0){
         curr->data = 0;
         cnt0--;
     }
     else if(cnt1 != 0){
         curr->data = 1;
         cnt1--;
     }
     else if(cnt2 != 0){
         curr->data = 2;
         cnt2--;
     }
     curr=curr->next;
 }
    return head;
}