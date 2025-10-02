#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){ // Base case
        return 0;
    }
    return n+sum(n-1); // Recursive call
}
int main(){
    sum(5); // 5+4+3+2+1+0 = 15
    cout<<sum(5); // 15
    return 0;
}