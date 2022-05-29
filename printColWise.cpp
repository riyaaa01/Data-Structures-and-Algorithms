#include<bits/stdc++.h>
using namespace std;

void printColumnWise(int **input, int row, int col){

    for(int j=0; j<col; j++){
        for(int i=0; i<row; i++){
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
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
    printColumnWise(input, row, col);
    return 0;
}