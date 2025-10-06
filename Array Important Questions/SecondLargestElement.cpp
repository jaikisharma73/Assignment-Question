#include<iostream>
#include<climits>
using namespace std;

int SeclargestElement(int* arr , int n){
    int firstlargest = arr[0];
    int secondlargest = INT_MIN;

    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] > firstlargest){
            secondlargest = firstlargest;
            firstlargest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] < firstlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main(){
    int arr[] = {10,2,34,12};
    int n=sizeof(arr)/sizeof(int);
    cout<<"the size of array is "<<n<<endl;

    cout<<"The Second largest element in array is "<<SeclargestElement(arr , n);
    return 0;
}