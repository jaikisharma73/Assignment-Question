#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamically allocate memory for new node
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null" << endl; // To indicate the end of the list
    }
    void insert(int value, int pos)
    {
        Node *newNode = new Node(value);

        Node *temp = head;
        for (int i = 0; i < pos-1; i++)
        {
            if(temp == NULL){
                cout<<"Position is invalid"<<endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};

int main()
{
    List li;
    li.push_front(10);
    li.push_front(20);
    li.push_front(30);
    li.printList(); // Output: 30 20 10
    li.push_front(33);
    li.printList(); // Output: 30 20 10

    li.insert(100,3);
     li.printList();

    return 0;
}