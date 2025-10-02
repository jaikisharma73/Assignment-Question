#include<iostream>
using namespace std;

void printSubsets(string str , string subSet){
    if(str.size() == 0 ){
        cout<<subSet<<"\n";
        return;
    }
    char ch = str[0];
    printSubsets(str.substr(1 , str.size()-1) , subSet + ch);
    printSubsets(str.substr(1 , str.size()-1) , subSet);
}
int main(){
    string str = "abc";
    string subSet = " ";

    printSubsets(str , subSet);
    return 0;
}