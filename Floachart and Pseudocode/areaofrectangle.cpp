#include <iostream>
using namespace std;
int main()
{
    int length;
    int width;
    cout << "Enter the lenght of rectangle :";
    cin >> length;
    cout << "Enter the widht of rectangle :";
    cin >> width;
    int area = length * width;

    cout << "The area of rectangle is :" << area;

    return 0;
}