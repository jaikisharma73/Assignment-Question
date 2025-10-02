#include<iostream>
using namespace std;

void KadanAlgo(int *arr , int size){
    int maxSum = INT16_MIN;
    int currSum = 0;
    for(int i = 0 ; i < size ; i++){
        currSum+=arr[i];
        maxSum = max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"The maximun sum is = "<<maxSum;
}

int main(){
    int size = 6;
    int arr[size]={2,-3,6,-5,4,2};
    KadanAlgo(arr , size);
return 0;

}