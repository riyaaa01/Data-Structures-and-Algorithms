#include<iostream>
using namespace std;


int main(){

    int row,col;
    cin>>row>>col;
    
    int **arr = new int *[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    int sum = 0;
    
    for(int j=0; j<col; j++){
        int sum = 0;
        for(int i=0; i<row; i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    
    return 0;
  
}