#include <bits/stdc++.h>
using namespace std ;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution {
    private:
    void traverseleft(Node* root , vector<int> &ans){
        if((root== NULL) || root->right == NULL & root->left == NULL)
        return;
        ans.push_back(root->data);
        if(root->left){
            traverseleft(root->left,ans);
        }
        else
        traverseleft(root->right,ans);
    }
    void traverseleaf(Node* root , vector<int>&ans){
        if(root==NULL){
            return;
        }
        if(root->right == NULL & root->left == NULL){
            ans.push_back(root->data);
            return;
        }
        traverseleaf(root->left,ans);
        traverseleaf(root->right,ans);
    }
    void traverseright(Node* root , vector<int> &ans){
        if((root== NULL) || root->right == NULL & root->left == NULL)
        return;
        if(root->right){
            traverseright(root->right,ans);
        }
        else{
             traverseright(root->left,ans);
        }
        //vapas aate vakt
        ans.push_back(root->data);
    }
public:
    vector <int> boundary(Node *root)
    {
      vector <int> ans;
      if(root == NULL){
          return ans;
      }
      ans.push_back(root->data);
      //tarverse left
      traverseleft(root->left,ans);
      //left leaf
      traverseleaf(root->left,ans);
      //right leaf '
      traverseleaf(root->right,ans);
      //right
      traverseright(root->right,ans);
      return ans;
    }
};