#include<iostream>
#include<unordered_map>
using namespace std;


int subarraysDivByK(int nums[], int k, int size) {

    int ans = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    int sum = 0; 
    int rem = 0;
    for(int i=0 ; i<size; i++){
        sum = sum + nums[i];
        rem = sum % k;
        if(rem<0){
            rem += k;
        }
        if(mp.find(rem) != mp.end()){
            ans = ans + mp[rem];
        }
        mp[rem]++;
    }

    return ans;
}
int main(){
    int m;
    cin>>m;

    int *arr= new int[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int n=subarraysDivByK(arr,k,m);
    cout<<n;
}