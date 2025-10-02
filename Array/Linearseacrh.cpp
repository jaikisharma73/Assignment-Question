#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={4 ,5, 6, 2 ,8};
    int target =6;
        int loc=0;
    for (int i = 0; i < n; i++){
            if (arr[i]==target){
                loc = i;
                break;
            }           
    }
    if(loc >0){
        cout<<"The position is "<<loc;
    }
    else{
        cout<<"Not found ";
    }
    
    return 0;
}