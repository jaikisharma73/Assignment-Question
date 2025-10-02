#include<iostream>
using namespace std;

int fibo(int number){
    if(number==0){ // Base case
        return 0;
    }
    else if(number==1){ // Base case
        return 1;
    }
    return fibo(number-1)+fibo(number-2); // Recursive call
}

int main(){

    int number;
    cout<<"Enter the number to find the fibonacci series: ";        
    cin>>number;
    cout<<fibo(number)<<endl; // 0 1 1 2 3 5 8 13 21 34

    return 0;
}