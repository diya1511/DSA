#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
long long int merge(long long arr[], long long s, long long mid, long long e)
   {  long long int inv =0 ;
   long long len1 = mid-s+1;
   long long len2 = e-mid ;
   long long arr1[len1];
   long long arr2[len2];
   long long k = s ;
   for(long long i =0 ; i < len1 ; i++){
       arr1[i]=arr[i+s];
   }
   for(long long j =0 ; j < len2 ; j++){
       arr2[j]=arr[j+mid+1];
   }
   long long i =0 , j =0 ;
    k = s ; inv = 0 ;
       while(i < len1 && j < len2){
           if(arr1[i]<= arr2[j]){
               arr[k++]=arr1[i++];
           }
           else{
               arr[k++]=arr2[j++];
               inv=inv+(len1-i);
           }}
          while(i < len1){
               arr[k++]=arr1[i++];
          }
           while(j < len2){
               arr[k++]=arr2[j++];
          }
       return inv;
   }
   long long int mergeSort(long long arr[], long long s, long long e)
   {   long long int inv =0 ;
      if(s < e){
       long long mid = s+ (e-s)/2;
       
       inv+=mergeSort(arr,s,mid);
       inv+=mergeSort(arr,mid+1,e);
       inv+= merge(arr,s,mid,e);
          
      }
       return inv;
       
   }
   long long int inversionCount(long long arr[], long long N)
   {
      
       return mergeSort(arr, 0, N-1);
   }

};