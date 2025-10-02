#include <iostream>
using namespace std;

int reverse(int num)
{
    int res = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        res = res * 10 + lastdigit;
        num /= 10;
    }
    return res;
}
int main()
{
    int num;
    cout << "Ente the number : ";
    cin >> num;
    if (reverse(num) == num)
    {
        cout << "The Number " << (reverse(num)) << " is Palindrome";
    }
    else
        cout << "The Number " << (reverse(num)) << " is not Palindrome ";

    return 0;
}