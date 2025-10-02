#include<iostream>
using namespace std;

void maxProfit(int *prices , int n){
        int bestBy[100000];
        bestBy[0]=INT16_MAX;

        for(int i = 1 ; i < n ; i++){
            bestBy[i] = min(bestBy[i-1], prices[i-1]);
            cout<<bestBy[i]<<", ";
        }
        int maxProfit=0;
        for(int i = 0 ; i < n ; i++){
            int currProfit = prices[i]-bestBy[i];
            maxProfit=max(maxProfit,currProfit);
            cout<<currProfit<<", ";
        }
        cout<<endl;

        cout<<" MaxProfit = "<<maxProfit<<endl;
}

int main(){
    int prices[]={7,1,5,3,6,4};
    int n= sizeof(prices)/sizeof(int);

    maxProfit(prices,n);

    return 0;
}