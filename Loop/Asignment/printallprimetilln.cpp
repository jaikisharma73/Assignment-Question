#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number :";
    cin>>N;
    for (int i = 2; i < N; i++)
    {
        bool isPrime = true;
        int current = i;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (current % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << current <<" ";
        }
    }

    return 0;
}