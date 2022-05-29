#include<bits/stdc++.h>
using namespace std;

void printSubstrings(char input[]) {
    // Write your code here
    int n = strlen(input);
    for(int i=0; i<n; i++){
        for(int j= i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}
int main() 
{
    char input[100];
    cin.getline(input,100);
    printSubstrings(input);
}