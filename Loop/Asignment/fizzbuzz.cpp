#include <iostream>
using namespace std;
int main()
{
    int num=30;
    int fizz = 0;
    int buzz = 0;
    for (int i = 1; i <= num; i++)
    {
        fizz++; buzz++;
        if (fizz == 3 && buzz == 5)
        {
            cout << "FizzBuzz ";
            fizz = 0;buzz = 0;
        }
        else if (fizz == 3)
        {
            cout << "Fizz ";
            fizz = 0;
        }
        else if (buzz == 5)
        {
            cout << "Buzz ";
            buzz = 0;
        }
        else
            cout << i << " ";
    }
    return 0;
}