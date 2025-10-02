#include<iostream>
#include <string.h>
using namespace std;

void toUppercase(char word[], int n){
    for(int i =0 ; i < n ; i++){
        char ch =word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            word[i]=ch-'a'+'A';
        }
    }
}
void toLowercase(char word[], int n){
    for(int i =0 ; i < n ; i++){
        char ch =word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }
        else{
            word[i]=ch-'A'+'a';
        }
    }
}

int main(){
    char word[]="APpLe";
    // toUppercase(word, strlen(word));
    toLowercase(word , strlen(word));
    
    cout<<word<<endl;

    return 0;
}