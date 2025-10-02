#include<iostream>
using namespace std;
int countPairing(int n){
    if(n<=1){
        return 1;
    }
    int remain_single = countPairing(n-1);
    int pair_up =(n-1)*countPairing(n-2);

    return remain_single+pair_up;
}

int main(){
    int total_ways =  countPairing(3);
    cout<< countPairing(3);
}
