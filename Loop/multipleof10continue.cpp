#include <iostream>
using namespace std;
int main()
{
    int num;
    while (1 > 0)
    {
        cout << "Enter the number :";
        cin >> num;
        if (num % 10 == 0)
        {
            continue;;
        }
        cout<<"The numeber is not 10"<<num<<" ";
    }

    return 0;
}