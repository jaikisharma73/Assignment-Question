#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void toReverse(char word[], int n){
    int st=0;
    int end=n-1;
    while (st<end){
       if(word[st]==word[end]){
            cout<<"The word is palindrome"<<endl;
            break;
       }
       else{
             cout<<"not a palindrome";
             break;
       }
       st++;
       end--;
    }   
}
int main(){
    char word[]="kuk";
    toReverse(word , strlen(word));
    // cout<<"Reverse = "<<word<<endl;
    return 0;
}