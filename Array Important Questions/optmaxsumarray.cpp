#include<iostream>
using namespace std;

void sumSubarray(int *arr , int n){
    int maxSum=INT8_MIN;
    for(int start = 0 ; start < n ; start++){
        int currSum=0;
        for(int end =start ; end < n ; end++){
          currSum+=arr[end];
           maxSum=max(maxSum,currSum);
        }
    }
    cout<<"Maximum Sum Subarray = "<<maxSum;
}
int main(){

    int arr[5]={-3,6-1,4,3};
    int n=5;
    sumSubarray(arr , n);

    return 0;

}