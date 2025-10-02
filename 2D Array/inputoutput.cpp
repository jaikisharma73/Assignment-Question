#include<iostream>
using namespace std;
int main(){
    int arr[3][3];

    int n=3,m=3;
    cout<<"Enter the value for matrix "<<endl;
    for(int i= 0 ; i<n ;i++){
        for(int j = 0 ; j<m ; j++){
            cin >>arr[i][j];
        }
    }
    cout<<"Output"<<endl;
    for(int i= 0 ; i<n ;i++){
        for(int j = 0 ; j<m ; j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}