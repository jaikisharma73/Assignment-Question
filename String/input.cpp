#include<iostream>
#include <string.h>
using namespace std;
int main(){
        // char word[30];
        // cin>>word;

        // cout<<"Your word was : "<<word<<endl;
        // cout<<"length : "<<strlen(word)<<endl;
        
        char sentence[50];
        cin.getline(sentence,30,'.');
        
        cout<<"Your word was : "<<sentence[0]<<endl;
        cout<<"length : "<<strlen(sentence)<<endl;

        

    return 0;
}