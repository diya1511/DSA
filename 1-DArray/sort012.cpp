#include <bits/stdc++.h>
using namespace std;
class Solution{
 public:
    void sort012(int a[], int n)
    {
    vector<int>ans;
  int cnt0 =0 ,cnt1=0, cnt2=0;
  int i ;
  for (i=0 ; i<n ;i++){
      if(a[i]==0){
          cnt0++;
      }
      if(a[i]==1){
          cnt1++;
      }
      if(a[i]==2){
          cnt2++;
      }
  }
   for(int i=0; i<n; i++)
    {
        if(cnt0) { a[i] = 0; cnt0--; }
        else if(cnt1) { a[i] = 1; cnt1--; }
        else a[i] = 2;
    }
    }
    
};