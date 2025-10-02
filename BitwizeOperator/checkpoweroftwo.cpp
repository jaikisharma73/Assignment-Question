#include<iostream>
using namespace std;

bool isPOweroftwo(int n){
    if(n<=0) return false;

    while (n>1){
        if(n%2 !=0) {
            return false;
        }
        n/=2;
    }
    return true;
}

int main(){
    int number ;
    cout<<"Enter the number :";
    cin>>number;

    if (isPOweroftwo(number)){
      cout<<number<<" is power of 2";
    }
    else{
         cout<<number<<" is not power of 2";
    }

    return 0;
}