#include <iostream>
using namespace std;

int getithBit(int num, int i){
int bitmask = 1 << i;
    if (!(num & bitmask)){
        return 0;
    }
    else{
        return 1;
    }
}

int setithBit(int num , int i){
    int bitmask = 1 << i;
    return (num | bitmask) ;
}

int clearithBit(int num , int i) {
        int bitmask = ~(1<<i);
        return (num & bitmask) ;
}

int countSetbit(int num ){
     int count =0;
     while (num>0)
     {
        int lastdigit =num & 1;
        count+=lastdigit;

        num=num>>1;
     }
     cout<<count<<endl;     
}

int main()
{
    // cout << getithBit(3, 0)<<endl;
    // cout<<setithBit(6,3);
    // cout<<clearithBit(6,1);
    countSetbit(10);
    return 0;
}