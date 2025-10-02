#include <iostream>
using namespace std;
int main()
{
    int principal;
    int rate;
    int time;
    cout << "Enter the principal :";
    cin >> principal;
    cout << "Enter the rate :";
    cin >> rate;
    cout << "Enter the time :";
    cin >> time;

    float SI = (principal * rate * time) / 100;

    cout << "The SI is : " << SI;
    return 0;
}