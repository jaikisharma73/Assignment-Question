#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int largestElement(int* arr , int n){
    int largest = INT_MIN;
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[] = {10,2,34,12};
    int n=sizeof(arr)/sizeof(int);
    cout<<"the size of array is "<<n<<endl;

    cout<<"The largest element in array is "<<largestElement(arr , n);
    return 0;
}