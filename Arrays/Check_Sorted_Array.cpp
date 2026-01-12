#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i=1; i<nums.size(); i++){
				if (nums[i]>nums[i-1]){
					continue;
				}
				else{
					return false;
				}
			}
			return true;
		}
};

int main(){
    Solution S1;
    vector<int>nums={1, 3, 3, 45};
    vector<int>nums2={1, 2, 3, 4, 5};
    cout<<S1.isSorted(nums)<<endl;
    cout<<S1.isSorted(nums2);
    return 0;
}