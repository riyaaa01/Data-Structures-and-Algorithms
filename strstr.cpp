#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int strStr(string haystack, string needle) {
    int m = haystack.size(), n = needle.size();
    for (int i = 0; i <= m - n; i++) {
        int j = 0;
        for (; j < n; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == n) {
            return i;
        }
    }
    return -1;
}

int main() 
{
    string haystack,needle;
    cin >>haystack>>needle;
    int n = strStr(haystack,needle);
    cout<<n;
}