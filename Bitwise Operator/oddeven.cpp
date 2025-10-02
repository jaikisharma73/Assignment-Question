#include<iostream>
using namespace std;

void oddEven(int num){
    if((num & 1)== 0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    oddEven(3);
    return 0;
}