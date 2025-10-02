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
        void pop_back() {
            if (head == NULL) {
                cout << "List is empty, nothing to pop." << endl;
                return;
            }
            if (head == tail) {
                delete head;
                head = tail = NULL;
                return;
            }
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
        int searchItr(int key){
            Node* temp = head;
            int idx =0;

            while(temp !=NULL){
                if(temp->data ==key){
                    return idx;
                    
                }
                temp = temp->next;
                idx++;
            }
            return -1;
        }
        void reverse(){
            Node* curr = head;
            Node* prev = NULL;

            while(curr != NULL){
                Node* next = curr->next;
                curr->next = prev;

                //updation

                prev = curr;
                curr = next;
            }
            head = prev;
        }
        int getsize(){
            int sz=0;
            Node* temp = head;

            while(temp != NULL){
                temp = temp->next;
                sz++;
            }
            return sz;
        }      
          void removenth(int n){
            int size = getsize();
            Node* prev = head;

            for(int i=0; i<(size-n); i++){
                prev = prev->next;
            }
            Node* toDel = prev->next;
            cout<<"Going to delete : "<<toDel->data<<endl;
            prev->next = prev->next->next;
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
    li.push_back(30);
    li.push_back(45);
    li.push_back(23);
    li.reverse();
    li.printList(); // Output: 10->20->30->Null
    cout<<li.searchItr(30);
    
 
    return 0;
}