#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    int b = 4;

    cout << "The sum is : " << a + b << endl;
    cout << "The subract is : " << a - b << endl;
    cout << "The multiple is : " << a * b << endl;
    cout << "The devide is : " << a / b << endl;
    cout << "The module is : " << a % b << endl;
    cout << "Grater or not : " << (a < b) << endl;
    cout << "Grater or not : " << (a > b) << endl;
    cout << "equal or not : " << (a == b) << endl;
    cout << "asign value of a in b : " << (a = b) << endl;

    return 0;
}