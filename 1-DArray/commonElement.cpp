#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector <int> v;
            int i =0 ; 
            int j =0;
            int k =0;
            while(i <n1 && j < n2 && k <n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    v.push_back(A[i]);
                    while(i+1 < n1 && A[i]==A[i+1]){
                        i++;
                    }
                      i++; j++; k++;
                }
                else if (A[i] < B[j] || A[i]< C[k]){
                    i++;
                }
                else if (B[j] < A[i] || B[j]< C[k]) {
                    j++;
                }
                 else if (C[k] < A[i] || C[k]< B[j]) {
                    k++;
                }
            }
            
            return v;
        }

};