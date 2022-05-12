#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void findDuplicates(vector<int>& nums) {
        
    vector<int>ans;
    unordered_map<int,int> mp;
        
    for(int i=0; i<nums.size(); i++ ){
        if(mp.find(nums[i]) != mp.end()){
            ans.push_back(nums[i]);
        }
            mp[nums[i]]++;
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    vector<int> nums;
	nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(3);
    nums.push_back(6);

    findDuplicates(nums);
}