#include<iostream>
using namespace std;

int maxProfit(int prices[], int len) {
   
    int ans = 0;

    for (int i = 1; i < len; i++){
        ans += max(0, prices[i] - prices[i - 1]);
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
    int n=maxProfit(arr,m);

    cout<<n;
}