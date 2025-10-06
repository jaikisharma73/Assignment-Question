#include<iostream>
using namespace std;


int reverseArray(int *arr , int n){
    int start = 0;
    int end = n-1;

    while (start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] ={2,3,4,6,5};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr , n);

    return 0;
}