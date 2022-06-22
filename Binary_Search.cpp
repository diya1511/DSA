#include <bits/stdc++.h>
using namespace std ;
int binarysearch(vector<int>& arr, int s, int e,int key){
    int start= s ; int end = e  ;
    while (start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] > key){
            end = mid - 1 ;
        }
        else if (arr[mid]==key){
            return mid ;
        }
        else {
            start = mid+1 ;
        }
    }
    return -1 ;
}