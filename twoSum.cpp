#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void twoSum(vector<int>& nums, int target) {
        
    unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < nums.size(); i++) {
		int numberToFind = target - nums[i];

		if (hash.find(numberToFind) != hash.end()) {

			cout<<hash[numberToFind] + 1<<" ";
			cout<<i+1<<" ";			
		}

		hash[nums[i]] = i;
    }
}

int main(){

    vector<int> nums;
	nums.push_back(2);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(12);

    int sum = 17;

    twoSum(nums,sum);

}