#include<bits/stdc++.h>
using namespace std;

void reverse(char input[], int start, int end){
    while(start<=end){
        swap(input[start], input[end]);
        start++;
        end--;
    }
}
void reverseEachWord(char input[]) {
    // Write your code here
    int start =0; 
    int end=0;
    char space = 32;
    int i=0;
    int len = strlen(input);
    for(i=0; i< len; i++)
    {
        if(input[i] == space)
        {
            end= i-1;
            reverse(input, start, end);
            start= i+1;
        }
    }
    end= i-1;
    reverse(input, start, end);
}

int main() 
{
    char input[100];
    cin.getline(input,100);
    reverseEachWord(input);
    cout<<input;
}