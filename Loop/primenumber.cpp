#include <iostream>
using namespace std;
int main()
{
    int num, prime;
    cout << "Enter the number :";
    cin >> num;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }
        if (prime == 0)
        {
            cout << "The number is not a prime number !";
        }
        else
        {
            cout << "The number is prime number !";
        }
    

    return 0;
}