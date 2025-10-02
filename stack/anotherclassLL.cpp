#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

template <class T>

class Node
{
public:
    T data;
    Node* next;

    Node(T value)
    {
        data = value;
        next = NULL;
    }
};
template <class T>
class Stack
{
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty .\n";
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top()
    {
        return head->data;
    }
    bool isEmpty()
    {
        return head == NULL;
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