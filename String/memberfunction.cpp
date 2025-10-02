#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Apna nhi hai ye wala college ";
    // cout<<str.length();
    // cout<<str.at(3) ;
    // cout<<str.substr(5,3);
    cout<<str.find("college");
    return 0;
}