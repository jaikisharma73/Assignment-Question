#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "THe factorial (" << num << ")is : " << fact<<endl;
    return fact;
}

int main()
{
    int num;
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);

    return 0;
}