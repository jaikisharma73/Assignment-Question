#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void toReverse(char word[], int n){
    int st=0;
    int end=n-1;
    while (st<end){
       swap(word[st++],word[end--]);
    }   
}

int main(){
    char word[]="jaiki";
    toReverse(word , strlen(word));
    cout<<"Reverse = "<<word<<endl;

    return 0;
}