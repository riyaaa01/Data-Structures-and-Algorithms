#include<iostream>
using namespace std;


int maxProfit(int *prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
}

int main(){

    int n;
    cin>>n;

    int *prices = new int[n];

    for(int i=0; i<n; i++){
        cin>>prices[i];
    }

    int profit = maxProfit(prices);

    cout<<profit;
}