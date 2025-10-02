#include <iostream>
using namespace std;

int Product(int a, int b) // a and b is parameters
{ 
    int Product = a * b;
    return Product;
}

int main()
{
    int a, b;
    cout << "Product = " << Product(8, 2); // 8 and 2 aere arguments
    return 0;
}