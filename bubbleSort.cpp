#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void bubbleSort(int *input, int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(input[j]>input[j+1]){
                swap(input[j], input[j+1]);
            }
        }
    }
}

int main(){
    int n; 
    cin>>n;
    int * arr = new int [n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}