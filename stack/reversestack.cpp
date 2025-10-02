#include <iostream>
#include <stack>
#include <string>
using namespace std;

void pushAtbottom(stack<int> &s, int val)
{ // O(n)
    if (s.empty())
    {
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtbottom(s, val);
    s.push(temp);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    pushAtbottom(s, top);
}
void printSTack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    printSTack(s);
    reverse(s);
    printSTack(s);
    return 0;
}