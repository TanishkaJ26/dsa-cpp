#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node *create(int arr[], int n){
    Node *head = NULL;
    Node *tail = NULL;

    for(int i=0; i<n ;i++){
        Node *newNode = new Node(arr[i]);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node *head = create(arr, n);
    print(head);
    return 0;
}