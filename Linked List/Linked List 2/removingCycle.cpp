#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            next = NULL;
        }
};
class List{
    public:     
        Node* head;
        Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
            Node* newNode = new Node(val);  //dynamically allocate memory for new node 
            if(head == NULL){
                head = tail = newNode;    
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

    void pop_front(){
            if(head==NULL){
                cout<<"List is empty\n";
                return;
            }
            Node* temp =head;

            head = head->next;

            temp->next = NULL;
            delete temp;
        }

    void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "Null" << endl; // To indicate the end of the list
        }
};

bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<"Cycle exist \n";
            return true;
        }
    }
    cout<<"Cycle doesn't exist \n";
    return false;
}

void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    bool isCycle = false;

    while(fast !=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<"Cycle Exist \n";
            isCycle = true;
            break;
        }
    }
    if(isCycle){
        cout<<"Cycle doesn't exist \n";
        return;
    }

    slow = head;
    if(slow == fast){  //tail=head
        while(fast->next != slow){
            fast =fast->next;
        }
        fast->next=NULL;
    }
    else{

        Node* prev = fast;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next =NULL;
    }
}


int main(){
    List li;

    li.push_front(4);
    li.push_front(3);
    li.push_front(2);
    li.push_front(1);
    // li.tail->next = li.head;

    // removeCycle(li.head);
    li.printList();
    return 0;
}