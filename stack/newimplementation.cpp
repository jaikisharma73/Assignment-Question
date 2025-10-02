#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack
{
    vector<T>vec;

public:
    void push(T value)
    {
        vec.push_back(value);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty .\n";
            return;
        }
        vec.pop_back();
    }

    T top()
    {
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }
    bool isEmpty()
    {
        return vec.size() == 0;
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