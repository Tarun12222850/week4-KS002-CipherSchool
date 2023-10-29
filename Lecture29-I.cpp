// Lecture 29 I - Linked List II Pt 1

#include <iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;

    Node(int d){
        this->data = d;
        this->next = nullptr;
    }
};

void printnode(Node* &node){ //printing the single node
    cout << "Value : " << node->data;
    cout << " Address : " << node->next << endl;
}

void printlinkedlist(Node* head){
    if(head == nullptr){
        cout << "Linked list is empty." << endl;
        return;
    }
    Node* temp = head;
    while(temp){
        cout << temp->data << "--> ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatstart(Node* &head, int data){
    Node* newnode = new Node(data);
    if(head==nullptr){
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insertatend(Node* &head, int data){
    Node* newnode = new Node(data);
    if(head==nullptr){
        head = newnode;
        return;
    }

    Node* end = head;
    while(end->next){
        end = end->next;
    }
    end->next = newnode;
}

int main(){
    Node* head = nullptr;
    // printlinkedlist(head);

    

    // Node* node1 = new Node(5);
    // head = node1;
    // // printlinkedlist(head);

    // Node* node2 = new Node(7);
    // node1->next = node2;
    // // printlinkedlist(head);

    // Node* node3 = new Node(8);
    // node2->next = node3;
    // printlinkedlist(head);

    // printnode(node1);
    // cout << node2 <<endl;
    // printnode(node2);
    // cout << node3 << endl;
    // printnode(node3);
    // printnode(node1->next);
    // printnode(node1->next->next);

    insertatend(head, 5);
    insertatend(head, 7);
    insertatend(head, 8);

    // Inserting new element at start
    insertatstart(head, 3);
    insertatstart(head, 2);

    // inserting the element at the end
    insertatend(head, 9);
    insertatend(head, 10);
    printlinkedlist(head);
    return 0;
}