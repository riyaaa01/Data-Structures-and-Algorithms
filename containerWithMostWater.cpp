#include<iostream>
using namespace std;

int function(int arr[], int size){
    int ans=0;
    int left = 0;
    int right = size-1;

    while(left<=right){
        int height = min(arr[left], arr[right]);
        int area = height*(right-left);

        ans = max(ans, area);

        if(arr[left]<arr[right]){
            left++;
        }
        else{
            right--;
        }
    }

    return ans;

}

int main(){
    int size;
    cin>>size;

    int *arr = new int[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ans= function(arr,size);

    cout<<ans<<" ";
}