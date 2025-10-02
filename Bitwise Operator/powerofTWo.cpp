#include<iostream>
using namespace std;

bool checkPoweroftwo(int num){
    if (!(num & (num-1))){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<checkPoweroftwo(16)<<endl;
    cout<<checkPoweroftwo(4)<<endl;
    cout<<checkPoweroftwo(8)<<endl;
    cout<<checkPoweroftwo(3)<<endl;
    return 0;
}