#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=1 ; i <=n ;i++){
        fact*=i;
    }
    cout<<"THe factorial is :"<<fact;
    return 0;
}