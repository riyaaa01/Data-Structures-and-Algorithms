#include<climits>
#include<iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int maxSum =INT_MIN;
    int row =0;
    bool ans = true;
    for(int i=0; i<nRows; i++){
        int sum = 0;
        for(int j=0; j<mCols; j++){
            sum += input[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            row = i;
        }
    }
    
    int col = 0;
    for(int j=0; j<mCols; j++){
        int sum = 0;
        for(int i=0; i<nRows; i++){
            sum += input[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            col = j;
            ans = false;
        }
    }
    
    if(ans){
        cout<<"row"<<" "<<row<<" "<<maxSum<<" ";
    }
    else{
        cout<<"column"<<" "<<col<<" "<<maxSum<<" ";
    }
}

int main(){
    int row, col;
	cin >> row >> col;

	int **input = new int *[row];
	for (int i = 0; i < row; i++)
	{
		input[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			cin >> input[i][j];
		}
	}
    findLargest(input, row, col);
    return 0;
}