#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int element = 1;
    
    for(int i = 0 ; i <= n ; i++){
        for (int j = 0; j <= i ; j++){
            cout << element <<" ";
            element++;
        }
        cout<<endl;
        
    }

    return 0;
}
