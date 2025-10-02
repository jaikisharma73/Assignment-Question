#include<iostream>
#include<math.h>
using namespace std;

int PowerofN(int x , int n ){
    if(n==0){
        return 1;
    }
    int halfpower = pow(x,n/2);
    int halfpowSquare = halfpower *halfpower;
    if(n%2 != 0){
        return x*halfpowSquare;
    }
    return halfpowSquare;
}

int main(){
    cout<<PowerofN(2,10);
    return 0;
}