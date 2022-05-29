#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    if (input[0] == '\0')
        return;

    if (input[0] == input[1]) {
         
        int i = 0;
        while (input[i] != '\0') {
            input[i] = input[i + 1];
            i++;
        }
        removeConsecutiveDuplicates(input);
    }
 
    removeConsecutiveDuplicates(input+1);
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}