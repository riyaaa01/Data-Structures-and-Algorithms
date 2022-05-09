#include<iostream>
using namespace std;

void merge(int *arr, int start, int end){

    int mid = (start + end) /2;

    int size1 = (mid - start) +1;
    int size2= end - mid;

    int *arr1= new int[size1];
    int *arr2= new int[size2];

    int k=start;

    for(int i=0; i<size1; i++){
        arr1[i] = arr[k++];
    }

    k = mid+1;
    for(int i =0; i<size2; i++){
        arr2[i]= arr[k++];
    }

    int i = 0, j=0;
    k=start;

    while(i< size1 && j< size2){
        if(arr1[i]< arr2[j]){
            arr[k]= arr1[i];
            k++;
            i++;
        }
        else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<size1){
        arr[k] = arr1[i];
        k++;
        i++;
    }

    while(j<size2){
        arr[k] = arr2[j];
        k++;
        j++;
    }

}


void mergesort(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    
    int mid = start+ (end -start)/2;

    mergesort(arr,start,mid);
    mergesort(arr, mid+1,end);

    merge(arr,start,end);
}


int main()
{
    
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}
