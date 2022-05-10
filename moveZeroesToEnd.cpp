#include<bits/stdc++.h>
using namespace std;

//2 ptr approach
void moveZeroes1(vector<int>& nums){
	int zeroPtr = 0;
	for(int i=0; i< nums.size(); i++){
		if(nums[i]!=0){
			swap(nums[i], nums[zeroPtr]);
			zeroPtr++;
		}
	}
}

//second approach
void moveZeroes(vector<int>& nums) {
        
        int lastNonZeroFoundAt = 0;
        
        for (int i = 0; i < nums.size(); i++) {
             if (nums[i] != 0) {
                 nums[lastNonZeroFoundAt++] = nums[i];
             }
        }
        
        for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
            
             nums[i] = 0;
        }
     
}

int main(){
	vector<int> nums;
	nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
	
	moveZeroes1(nums);
	
	for(int i=0; i<5; i++){
		cout<<nums[i]<<" ";
	}
	
	return 0;
}
