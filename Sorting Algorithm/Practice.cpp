#include<iostream>
using namespace std;
void insertionSort(char arr[],int n){
    for (int i = 1; i < n; i++)
    {
      int curr=arr[i];
      int prev=i-1;
      while (prev >= 0 && arr[prev] >curr)
      {
        swap(arr[prev+1],arr[prev]);
        prev--;
      }
      arr[prev + 1]=curr;
    }
    
}
  void printArray(char arr[],int n){
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    
    char ch[4]={'a', 'b', 'd','c'};

    insertionSort(ch,4);
    printArray(ch,4);
    
return 0;
}