#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums){
        int largest=nums[0];
        for (int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
            else{
                continue;
            }
        }
        return largest;
    }
};

int main(){
    Solution S1;
    vector<int>nums={1, 2, 3, 45};
    cout<<S1.largestElement(nums);
    return 0;
}