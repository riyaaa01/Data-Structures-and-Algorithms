#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n){

    int mn = INT_MAX;

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n; 
    cin>>n;
    int * arr = new int [n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}