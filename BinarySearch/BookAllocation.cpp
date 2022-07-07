#include <bits/stdc++.h>
using namespace std ;
bool ispossible(vector<int> arr, int n, int m,int mid){
    int pagesum  = 0;
    int countstudent = 1 ;
    for(int i=0 ; i < n ; i++){
          if(pagesum + arr[i] <= mid){
        pagesum+=arr[i];
    }
        else{
            countstudent++;
            if(countstudent > m || arr[i] > mid){
                return false;
            }
              pagesum = arr[i];
        }
        }
       return true;
  }

int allocateBooks(vector<int> arr, int n, int m) {
   int s = 0 ; 
   int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
sum+=arr[i];}
    int e = sum;
    int ans = -1;
     
    while(s <= e){
       int mid = s + (e-s)/2;
        if(ispossible(arr,n,m,mid)){
            ans = mid ;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
       
    }
    return ans;
}