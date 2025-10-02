#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0){
       return 1;
    }
    else{
       return n*fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a number to find the factorial: ";
    cin>>n;
    cout<<"The factorial of ";
    cout << n << " is: " << fact(n) << endl;
    return 0;
}