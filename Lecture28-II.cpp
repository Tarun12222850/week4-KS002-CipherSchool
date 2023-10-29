// Lecture 28 II - Linked List I Pt 2

#include <iostream>
using namespace std;


class Node{
    public:
    int data; // Linked list can contain more than one data in a node
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

int main(){
    Node* node1 = new Node(5);
    Node* node2 = new Node(7);
    Node* node3 = new Node(9);

    node1->next = node2;
    node2->next = node3;

    printnode(node1);
    cout << node2 <<endl;
    printnode(node2);
    cout << node3 << endl;
    printnode(node3);

    return 0;
}