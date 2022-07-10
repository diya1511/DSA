#include <bits/stdc++.h>
using namespace std ;
class Solution{
 public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    if(m==0 || n ==0){
        return 0;
    }
    sort(a.begin(),a.end());
    if(n < m){
        return -1;
    }
    long long diff;
    long min_diff = INT_MAX;
    for(long long i =0; i+m-1 < n; i++){
         diff = a[i+m-1]- a[i];
        if(diff < min_diff){
            min_diff=diff;
        }
    }
    return min_diff;
    }   
};