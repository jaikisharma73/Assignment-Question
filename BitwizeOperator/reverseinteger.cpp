#include <iostream>
using namespace std;

int reverseInt(int n)
{
    long long rev = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        rev = rev * 10 + lastdigit;
        n = n / 10;

        if(rev > INT16_MAX || rev < INT16_MIN){
            return 0;
        }
    }
    return (int) rev;
}
int main()
{
    cout<<reverseInt(-893);
    return 0;
}