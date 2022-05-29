#include<climits>
#include<iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int totalele = nRows*nCols;
    int count = 0;
    int rowStart =0;
    int colStart = 0;
    
    while(count<totalele){
        for(int i=colStart; count < totalele && i < nCols  ; i++){
            cout<<input[rowStart][i]<<" ";
            count++;
        }
        rowStart++;
        
        for(int i= rowStart; count < totalele && i< nRows  ; i++){
            cout<<input[i][nCols-1]<<" ";
            count++;
        }
        nCols--;
        
        for(int i= nCols-1; count < totalele && i>= colStart  ; i--){
            cout<<input[nRows-1][i]<<" ";
            count++;
        }
        nRows--;
        
        for(int i = nRows-1; count < totalele && i>= rowStart  ; i--){
            cout<<input[i][colStart]<<" ";
            count++;
        }
        colStart++;
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
    spiralPrint(input, row, col);
    return 0;
}