#include<iostream>
using namespace std;

int linearSearch(int arr[], int n ,int key){
    for (int i = 0; i < n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;   
}
int main(){
    int arr[]={23 ,45 ,2 ,6 ,89 };
    int n=sizeof(arr)/sizeof(int);

    cout<<"Position of index = "<<linearSearch(arr , n ,6);
    return 0;
}