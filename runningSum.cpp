#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        
    vector<int>v;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        v.push_back(sum);
    }
    
    return v;
}
vector<int> runningSum2(vector<int>& nums) {
        
    for(int i=1; i<nums.size(); i++){
        nums[i] += nums[i-1];
    }
    
    return nums;
}  

int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    vector<int> ans = runningSum(nums);

    for(int i=0; i<4; i++){
        cout<<ans[i]<<" ";
    }
}