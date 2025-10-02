#include<iostream>
using namespace std;

void checkarraySort(int *arr , int size){
    if(size==0 || size==1){
        cout<<"The array is sorted"<<endl;
        return;
    }
    if(arr[0] > arr[1]){
        cout<<"The array is not sorted"<<endl;
        return;
    }
    checkarraySort(arr+1 , size-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    checkarraySort(arr , size);
    return 0;
}