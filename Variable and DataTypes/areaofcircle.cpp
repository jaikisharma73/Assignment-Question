#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    int radius;
    cout << "Enter the radius of circle : ";
    cin >> radius;

    float area = PI * radius * radius;

    cout << "The area of circle is :" << area;
    return 0;
}