#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class T>
class Stack
{
    list<T> ll;

public:
    void push(T value)
    {
        ll.push_front(value);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty .\n";
            return;
        }
        ll.pop_front();
    }

    T top()
    {
        return ll.front();
    }
    bool isEmpty()
    {
        return ll.size() == 0;
    }
};
int main()
{
    Stack<string> s;
    s.push("Goal");
    s.push("On your");
    s.push("Focus");
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}