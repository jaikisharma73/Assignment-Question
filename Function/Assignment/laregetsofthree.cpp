#include<iostream>
using namespace std;

int largestNum(int a , int b, int c){
    if(a>b && a>c) cout<<"The Number a is Greatest";
    else if(b>a && b>c) cout<<"The Number c is Greatest";
    else cout<<"The number c is Greatest";
}

int main(){
    largestNum(5,3,2);
    return 0;
}
