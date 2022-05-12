#include<iostream>
using namespace std;


bool canJump(int nums[], int n) {
        int i = 0;
        for (int reach = 0; i < n && i <= reach; ++i)
            reach = max(i + nums[i], reach);
        
         return i == n;
        
}

int main()
{
    
    int n;
    cin>>n;

    int *nums = new int[n];

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

   bool ans= canJump(nums,n);
   if(ans){
       cout<<"True";
   } 
   else{
       cout<<"False";
   }

    return 0;

}
