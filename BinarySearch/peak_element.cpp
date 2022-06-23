#include <bits/stdc++.h>
using namespace std ;
int findPeakElement(vector<int>& nums) {
        int high=nums.size()-1;
				int low=0;
				int mid;
				while(low<high){
					mid = ( low + high )/2;
					if(nums[mid]>nums[mid+1]) high=mid;
					else low=mid+1;
				}
				return low; 
    }