#include <iostream>
using namespace std;

void decTobin(int decNum)
{
    int n = decNum;
    int pow = 1;
    int binNum = 0;
    while (n > 0)
    {
        int remainder = n % 2;
        binNum += remainder * pow;
        n = n / 2;
        pow = pow * 10;
    }
    cout << binNum;
}
int main()
{
    decTobin(5);
    return 0;
}