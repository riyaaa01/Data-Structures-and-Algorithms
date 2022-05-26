#include <iostream>
#include <string>
#include<stack>
#include<algorithm>
using namespace std;

    string reverse(string temp){
        int s =0;
        int e = temp.length() -1;
        
        while(s<=e){
            swap(temp[s], temp[e]);
            s++;
            e--;
        }
        
        return temp;
    }

    string reverseWords(string s) {
        
        string temp;
        for(int i=0; i<s.length(); i++){
            temp.push_back(s[i]);
            if(s[i] == ' '){
                reverse(temp);
            }
        }
        
        return temp;
    }
int main() 
{
    string str;
    getline(cin,str);
    string ans = reverseWords(str);
    cout<<ans;
}