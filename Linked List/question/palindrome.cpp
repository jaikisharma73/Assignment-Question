#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }

};

// Function to check if the linked list is palindrome or not

bool ispalindrome(Node* head){
    vector<int>vals;

    // Store all element in vector

    Node* temp = head;
    while(temp != NULL){
        vals.push_back(temp->data);
        temp = temp->next;
    }
    // Check if vector is palindrome

    int i = 0, j = vals.size()-1 ;
    while(i < j){
        if(vals[i] != vals[j])
            return false;
        i++;
        j--;
    }
    return true;
}

//function to create a linked lsit frome array

Node* createList(int arr[], int size){
    if(size == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* curr = head;

    for(int i = 1 ; i < size ; i++){
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main(){
    int arr[]={1,2,2,1};
    Node* head1 = createList(arr,4);
    cout<<"Is palindrome ? "<<(ispalindrome(head1) ? "Yes" : "No")<<endl;

    int arr2[]={1,2};
    Node* head2 = createList(arr2,2);
    cout<<"Is palindrome ? "<<(ispalindrome(head2) ? "Yes" : "No")<<endl;
    return 0;
}