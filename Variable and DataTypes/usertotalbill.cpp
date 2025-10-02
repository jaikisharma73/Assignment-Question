#include <iostream>
using namespace std;
int main()
{
    float pen, pencile, eraser;
    cout << "Enter the cost of pen :";
    cin >> pen;
    cout << "Enter the cost of pencile :";
    cin >> pencile;
    cout << "Enter the cost of eraser :";
    cin >> eraser;

    float totalbill = (pen + pencile + eraser);
    float totalbillwithGST = totalbill + 0.18;

    cout << "The total bill to pay by costumer is : $" << totalbillwithGST;
    return 0;
}