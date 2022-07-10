#include <bits/stdc++.h>
using namespace std ;
//api is set in leetcode
class Solution {
public:
    int firstBadVersion(int n) {
        int s =0; int e = n-1;
        while(s <=e){
            int mid = s+(e-s)/2;
            if(isBadVersion(mid)){
                e= mid-1;
            }
            else{
            s= mid+1;}
        }
        return s;
    }
};