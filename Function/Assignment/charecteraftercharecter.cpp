#include<iostream>
using namespace std;

char getNextchar(char ch){
    if (ch=='z'){
         return 'a';
        }
    else{
         return ch+1; 
    }
    
}
 int main(){

      cout<< getNextchar('f')<<endl;

    return 0;
}