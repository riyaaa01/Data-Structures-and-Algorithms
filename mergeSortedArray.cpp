#include<iostream>
using namespace std;

void mergeSort(int nums1[], int n, int nums2[], int m){
    
    if(nums1==NULL || nums2==NULL){
        return;
    }
    int outputsize = m+n;
    int output[m+n];
    int i=0; //nums1
    int j=0; //nums2
    int k=0; //output
    if(nums1[0]<nums2[0]){
        output[k] = nums1[0];
        i++;k++;
    }
    else{
        output[k] = nums2[0];
        j++;k++;
    }

    while(i<n && j<m){
        if(nums1[i]<nums1[j]){
            output[k] = nums1[i];
            i++;
            k++;
        }
        else{
            output[k] = nums2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        output[k++] = nums1[i++];
    }

    while(j<m){
        output[k++] = nums2[j++];
    }

    for(int i=0; i<outputsize; i++){
        cout<<output[i]<<" ";
    }
}

int main()
{
    
    int n;
    cin>>n;

    int *nums1 = new int[n];

    for(int i=0; i<n; i++){
        cin>>nums1[i];
    }

    int m;
    cin>>m;

    int *nums2 = new int[m];

    for(int i=0; i<n; i++){
        cin>>nums2[i];
    }

   mergeSort(nums1, n, nums2, m);

    return 0;

}
