#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the number :";
        cin>>n;

        int number= n;

        int digit1 = number%10;
        number=number/10;
        int digit2 = number%10;
        number=number/10;
        int digit3 =number;

        int cubesum=digit1*digit1*digit1 + digit2*digit2*digit2 + digit3* digit3* digit3;

        if (cubesum==n)
        {
            cout<<"The number is armstrong number ";
        }
        else{
            cout<<"The number is not armstrong number ";
        }
        
    return 0;
}