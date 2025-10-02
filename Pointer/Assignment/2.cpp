#include<iostream>
using namespace std;

void multipleby2(int &a ,int &b ,int &c){
    a*=2;
    b*=2;
    c*=2;
}
int main(){
    int x =1 , y =2 , z=3;
    multipleby2(x,y,z);
    cout<< x << y << z <<endl;
    return 0;
}