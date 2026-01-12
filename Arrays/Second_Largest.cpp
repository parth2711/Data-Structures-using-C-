#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int secondLargestElement(vector<int>& nums) {
        int max=nums[0];
        int slargest=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                slargest=max;
                max=nums[i];
            }
            else if(nums[i]>slargest && nums[i]<max){
                slargest=nums[i];
            }
        }
        return slargest;
    }
};
int main(){
    Solution S1;
    vector<int>nums={1, 2, 3, 4, 5};
    cout<<S1.secondLargestElement(nums);
    return 0;
}