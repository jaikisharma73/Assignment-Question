#include<iostream>
#include<math.h>
using namespace std;

int wholeSquare(int a , int b){
    return pow(a,2)+pow(b,2)+ 2*(a*b);
}
int main(){
    int a = 4;
    int b = 2;
    cout<<wholeSquare(a,b);
    return 0;
}