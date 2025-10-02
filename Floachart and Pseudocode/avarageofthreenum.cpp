#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;

    int average = (a + b + c) / 3;

    cout << "The average of three number is : " << average;
    return 0;
}