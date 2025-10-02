#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
      int curr=arr[i];
      int prev=i-1;
      while (prev >= 0 && arr[prev] > curr)
      {
        swap(arr[prev+1],arr[prev]);
        prev--;
      }
      arr[prev + 1]=curr;
    }
    
}
  void printArray(int arr[],int n){
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    int n=10;
    int arr[]={4,42,7,31,9,50,1,5,2,3};

    insertionSort(arr,n);
    printArray(arr,n);
    
return 0;
}