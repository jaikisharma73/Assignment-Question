#include <iostream>
using namespace std;
int main()
{
    int num;
    int digitsum = 0;
    cout << "Enter the number : ";
    cin >> num;

    while (num > 0)
    {
        int lastdigit = num % 10;
        digitsum = lastdigit + digitsum;
        num = num / 10;
    }
    cout << "Sum = " << digitsum << endl;

    return 0;
}