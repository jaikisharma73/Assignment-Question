#include<iostream>
#include<vector>
using namespace std;
   int containsDuplicate(int *arr , int size) {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    return true; 
                    break;
                }
            }
        }
        return false; 
    }  
    int main() {
       int arr[]= {1, 2, 3, 2};
        int size = sizeof(arr) / sizeof(int);
    
        if(containsDuplicate(arr, size)){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
        return 0;
    };