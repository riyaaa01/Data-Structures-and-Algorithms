#include<iostream>
#include<unordered_map>
using namespace std;

int subarraySum(int nums[], int size, int k) {
        
        unordered_map<int , int> mp;
        int sum = 0;
        int count =0;
        
        for(int i=0; i<size; i++){
            sum += nums[i];
            if(sum==k) count++;
            if(mp.find(sum-k) != mp.end()) count+= mp[sum-k];
            if(mp.find(sum) != mp.end()) mp[sum]++;
            else mp[sum] = 1;
        }
        
        return count;
}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int ans= subarraySum(arr,size,k);

    cout<<ans<<" ";
}