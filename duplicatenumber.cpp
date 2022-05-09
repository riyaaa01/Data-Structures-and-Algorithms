#include<iostream>
#include <unordered_set>
using namespace std;

//first approach

int findDuplicate(int *nums, int n){
    sort(nums, nums+n);
    for(int i=0; i<n; i++){
        if(nums[i]== nums[i-1]){
            return nums[i];
        }
    }

    return -1;
}

//2nd approach
int findDuplicate(int *nums) {

    unordered_set<int> seen;
        for (auto &num : nums  ) {
            if (seen.count(num))
                return num;
            seen.insert(num);
        }
        return -1;

}
//3rd approach
int findDuplicate(int *nums) {
        
        for (int i = 0; i <n ; i++) {
            int index = nums[i] % n;
            nums[index] += n;
        }
        
        bool flag = false;
        int ans;
        for (int i = 0; i < n; i++) {
            if ((nums[i] / n) > 1) {
                ans = i;
                flag = true;
            }
        }
        if (!flag){
            return -1;
        }
        return ans;
}

int main()
{
    
    int n;
    cin>>n;

    int *nums = new int[n];

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

   int ans= findDuplicate(nums);
    
    cout<<ans;

    return 0;

}
