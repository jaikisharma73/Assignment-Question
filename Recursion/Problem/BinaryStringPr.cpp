#include<iostream>
#include<string>
using namespace std;

void BinaryString(int n ,  int lastplace , string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace!=1){
        BinaryString(n-1 , 0 , ans+"0");
        BinaryString(n-1 , 1 , ans+"1");
    }
    else{
        BinaryString(n-1 , 0 , ans+"0");
    }
}
void BinaryString2(int n , string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(ans[ans.size()-1] != '1'){
        BinaryString2(n-1 , ans+'0');
        BinaryString2(n-1 , ans+'1');
    }
    else{
        BinaryString2(n-1, ans+'0');
    }
}
int main(){
    string ans ="";
    BinaryString2(3 , ans);
    return 0;
}