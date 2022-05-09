#include<iostream>
#include<array>
using namespace std;

void sortColors(int nums[], int n) {
    
        int i= 0;
        int mid = 0;
        int j = n - 1;
        
        while(mid<=j){
            
            if(nums[mid]==0){
                swap(nums[mid], nums[i]);
                i++;
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[j]);
                j--;
            }
            else{
                mid++;
            }
            
        }
   
}

int main(){

    int n;
    cin>>n;

    int *nums = new int[n];

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    sortColors(nums,n);

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}