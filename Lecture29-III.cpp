// Lecture 29 III - Linked List II Pt 3

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

void insertatmiddleafterwhichelement(Node* &head, int location, int data){


    Node* newnode = new Node(data);
    Node* var = head;
    // loop to check whether location exists or not
    while(var->data!=location){
        var = var->next;
        if(var==nullptr){
            cout << "The location dosen't exist, check the location again." << endl;
            return ;
        }
    }

    newnode->next = var->next;
    var->next = newnode;
}

void deletenodeoflinkedlist(Node* &head, int data){
    if(head->data == data){
        cout << "The head of the linked list is going to be deleted !!" << endl;
        head = head->next;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while(temp->data!=data){
        if(temp->next == nullptr){
            cout << "The element to be deleted doesn't exist." << endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    if(temp->next==nullptr){
        prev->next = nullptr;
        return;
    }
    prev->next = prev->next->next;
}

int main(){
    Node* head = nullptr;

    insertatend(head, 5);
    insertatend(head, 7);
    insertatend(head, 8);

    // Inserting new element at start
    insertatstart(head, 3);
    insertatstart(head, 2);

    // inserting the element at the end
    insertatend(head, 9);
    insertatend(head, 10);

    insertatmiddleafterwhichelement(head, 3, 4);

    insertatmiddleafterwhichelement(head, 5, 6);
    printlinkedlist(head);

    // delete element 2, 6, 10
    deletenodeoflinkedlist(head, 2); //2
    deletenodeoflinkedlist(head, 10); //10
    deletenodeoflinkedlist(head, 6); //6
    deletenodeoflinkedlist(head, 100);
    printlinkedlist(head);
    return 0;
}