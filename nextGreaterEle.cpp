#include<bits/stdc++.h>
using namespace std;

void nextGRE(int arr[],int n)
{
    stack<int> s;

    s.push(arr[0]);
     
    for(int i=1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(arr[i]);
            continue;
        }
        while(s.empty() == false && arr[i]>s.top())
        {
            cout<<s.top()<<"->"<<arr[i]<<endl; 
            s.pop();
        }
        s.push(arr[i]);
    }
    while(s.empty() == false)
    {
        cout<<s.top()<<"->"<<"-1"<<endl; 
        s.pop();
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    nextGRE(arr, n);
    return 0;
}