#include<iostream>
using namespace std;
int main(){
        // int a=7;
        // int b=8;
        // cout<<&a<<endl;
        // cout<<&b<<endl;
        int a=7;
        int *ptr=&a;
        cout<<ptr<<"="<<&a<<endl; // address of a


    return 0;
}