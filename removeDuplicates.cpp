#include<iostream>
using namespace std;


int removeDuplicates(int *nums) {
        
        int n = nums.size();
        int k=0;
        for(int i=1; i<n; i++){
            if(nums[k]!=nums[i]){
                k++;
                nums[k] = nums[i];
               
            }
        }
        
        return k+1;
        
}
int main(){

    int n;
    cin>>n;

    int *nums = new int[n];

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int k = removeDuplicates(nums);
    cout<<k;

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}
