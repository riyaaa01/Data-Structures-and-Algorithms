#include <bits/stdc++.h>
using namespace std;

void Leaders(int* arr,int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/
    int j=0;
    int *save = new int[len];
    int largest = INT_MIN;
    for(int i=len-1; i>=0; i--){
        if(arr[i]>=largest){
            save[j] = arr[i];
            j++;
            largest = arr[i];
        }
    }
    
    for(int i=j-1;i>=0; i--){
        cout<<save[i]<<" ";
    }
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
