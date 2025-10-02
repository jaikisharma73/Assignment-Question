#include<iostream>
using namespace std;
int main(){
     int a=7;
     int &b=a;
     b=25;
     cout<<b<<endl;
     cout<<a;
    return 0;
}