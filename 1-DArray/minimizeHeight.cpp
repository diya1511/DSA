#include <bits/stdc++.h>
using namespace std;
class Solution {
 
  public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr,arr+n);
       int maximum = arr[n-1];
       int minimum = arr[0];
       int diff = maximum-minimum;
       
       for(int i = 1;i<n;i++){
           if(arr[i]-k<0){
               continue;
           }
           maximum= max(arr[n-1]-k,arr[i-1]+k);
           minimum =  min(arr[0]+k,arr[i]-k);
           diff = min(diff,maximum-minimum);
       }
       return diff;
    }
};