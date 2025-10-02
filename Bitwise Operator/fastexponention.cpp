#include<iostream>
using namespace std;

void fastexpo(int x ,int num){
    int ans=1;
    while (num>0)
    {
       int lastbit = num&1;   
       if(lastbit){
        ans = ans *x;
    }
        x=x*x;
        num= num>>1;     
    }
    cout<<ans<<endl;
    
}

int main(){

    fastexpo(3,5);

    return 0;
}
