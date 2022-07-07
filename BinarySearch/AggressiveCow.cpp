#include <bits/stdc++.h>
using namespace std ;
bool ispossible(vector<int> &stalls, int k,int mid){
    int cowCount = 1;
    int laspost=stalls[0];
   for( int i =0 ; i < stalls.size(); i++){
       if(stalls[i]- laspost >= mid){
           cowCount++;
           if(cowCount==k){
               return true;
           }
           laspost=stalls[i];
       }
   }
    return false;
}    
int aggressiveCows(vector<int> &stalls, int k)
{   int ans =-1;
    int s =0 ;
 sort(stalls.begin(),stalls.end());
    int maxi=-1;
    for(int i =0 ; i < stalls.size();i++){
        maxi=max(stalls[i],maxi);
    }
    int e = maxi;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(ispossible(stalls,k,mid)){
            ans = mid;
            s=mid+1;
        }
        else{
            e = mid - 1;
        }
    }
 return ans;
}