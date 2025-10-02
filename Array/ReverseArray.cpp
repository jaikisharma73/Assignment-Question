#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }   
}

int main(){
    int arr[]={2,3,4,6,5};
    int n=sizeof(arr)/sizeof(int);
        int start=0;
        int end=n-1;

       while (start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
       }

       printArray(arr,n);

    return 0;
}