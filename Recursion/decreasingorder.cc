#include<iostream>
using namespace std;

int print(int num){
    if(num==0){ // Base case
        return 0;
    }
    cout<<num<<" ";
    print(num-1);// Recursive call
}

int main(){
        print(10); // 10 9 8 7 6 5 4 3 2 1
    return 0;
}