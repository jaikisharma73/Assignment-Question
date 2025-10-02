#include <iostream>
using namespace std;

int evenOdd(int num)
{
    if (num % 2 == 0)
        cout << "The number is even ";
    else
        cout << "The number is odd";
}
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    evenOdd(num);
    return 0;
}