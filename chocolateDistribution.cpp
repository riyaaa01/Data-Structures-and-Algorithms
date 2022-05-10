#include<iostream>
#include<array>
#include <algorithm>
#include<climits>
using namespace std;

int chocolateDistribution(int arr[], int n, int m){
    sort(arr,arr+n);

    int minDiff= INT_MAX;
      
      for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}

int main(){
    int n;
    cin>>n; 

    int m;
    cin>>m;

    int *arr = new int(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int minDiff= chocolateDistribution(arr,n,m);

    cout<<"Minimum difference is"<<minDiff<<" ";

    return 0;
}