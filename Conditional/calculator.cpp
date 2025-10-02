#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int operater;

    cout << "Enter the operator :";
    cin >> operater;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;

    switch (operater)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '/':
        cout << a / b;
        break;
    case '*':
        cout << a * b;
        break;
    case '%':
        cout << a % b;
        break;

    default:
        cout << "Invalid Operator";
        break;
    }

    return 0;
}