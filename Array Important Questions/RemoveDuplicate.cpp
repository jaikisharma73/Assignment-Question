#include<iostream>
using namespace std;

void removeDuplicatez(int* arr, int n){
    int j = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] != arr[i+1]){
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];
    cout<<"Array after removing duplicate"<<endl;
    for(int i = 0 ; i<j ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(int);

    removeDuplicatez(arr , n);
    return 0;
}