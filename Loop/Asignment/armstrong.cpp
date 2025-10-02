#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int num = n;
    int cubeSum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        cubeSum += lastdigit * lastdigit * lastdigit;
        num /= 10;
    }
    if (n == cubeSum)
    {
        cout << "The number is armstrong number ";
    }
    else
    {
        cout << "The number is not armstrong number ";
    }

    return 0;
}
