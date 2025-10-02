#include<iostream>
using namespace std;

bool isSorted(int *arr , int n , int i){
    if(i==n-1){ // Base case
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr , n , i+1); // Recursive call

}

int main(){
    int arr[5]={1,2,3,4,5}; // Sorted array
    int arr2[5]={2,1,3,4,5}; // Unsorted array
    return 0;
}