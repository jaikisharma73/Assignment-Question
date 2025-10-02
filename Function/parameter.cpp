#include <iostream>
using namespace std;

int sum(int a, int b) // a and b is parameters
{ 
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    cout << "Sum = " << sum(8, 2); // 8 and 2 aere arguments
    return 0;
}