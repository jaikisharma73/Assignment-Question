#include<iostream>
using namespace std;
int main(){
        int n;
        int first=0;
        int sec=1;
        cout<<"Enter the number :";
        cin>>n;

        for (int i = 2; i < n; i++)
        {
            int third = first+sec;
            cout<<third<<" ";
            first=sec;
            sec=third;
        }
        cout<<endl;

        
    return 0;
}