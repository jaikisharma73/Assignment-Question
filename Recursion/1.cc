#include<iostream>
using namespace std;
 
void printHello()
{
    cout<<"Hello World"<<endl;
    printHello();
}
int main()
{
    printHello();
}