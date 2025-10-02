#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
        ~Node(){
            cout<<"~Node "<<data<<endl;
            if(next != NULL){
                delete next;
                next = NULL;
            }
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
        ~List(){
            cout<<"~List"<<endl;
            if(head != NULL){
                delete head;
                head = NULL;
            }
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
        void push_back(int val){
            Node* newNode = new Node(val);  //dynamically allocate memory for new node 
            if(head == NULL){
                head = tail = newNode;    
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        void insert(int val, int pos){
            Node* newNode = new Node(val);//dynamically allocate memory for new node 
            Node* temp = head;
            for(int i = 0; i < pos-1; i++){
                if(temp == NULL){
                    cout << "Position is invalid" << endl;
                    return; // Position is out of bounds
                }
               temp = temp->next; // Traverse to the node before the position
            }
            newNode->next = temp->next;
            temp->next = newNode;
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


int main(){
    List li;
    li.push_back(10);
    li.push_back(20); 
    li.printList(); // Output: 10->20->Null
    return 0;
}