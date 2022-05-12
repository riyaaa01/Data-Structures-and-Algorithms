#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        
    unordered_map<int,int> mp;
    for(int num : nums){
        if (++mp[num] > nums.size() / 2) {
            return num;
        }
    }
    return 0;
}
int main(){

    vector<int> nums;
	nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);

    int ans = majorityElement(nums);

    cout<<ans<<" ";
}
