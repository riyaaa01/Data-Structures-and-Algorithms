#include<iostream>
#include<vector>
using namespace std;

int nthUglyNumber(int n) {
        
    vector <int> results (1,1);
    int i = 0, j = 0, k = 0;
    while (results.size() < n)
    {
        results.push_back(min(results[i] * 2, min(results[j] * 3, results[k] * 5)));
        if (results.back() == results[i] * 2) ++i;
        if (results.back() == results[j] * 3) ++j;
        if (results.back() == results[k] * 5) ++k;
    }
    return results.back();
}
int main(){
    int n;
    cin>>n;
    int ans = nthUglyNumber(n);
    cout<<ans;
}