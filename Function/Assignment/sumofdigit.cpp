#include <iostream>
using namespace std;

int sumOfdigit(int num)
{
    int digitsum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        digitsum = digitsum + lastdigit;
        num /= 10;
    }
    cout << "The sum of all digit is : " << digitsum;
}

int main()
{
    int num;
    sumOfdigit(234);

    return 0;
}