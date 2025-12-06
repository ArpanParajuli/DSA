#include <iostream>

using namespace std;


class Node {
public:
    Node* next;
    int data;


    Node(int data)
    {
        next = nullptr;
        this->data = data;
    }
};


Node* InsertAtFront(Node* head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

void InsertAtLast(Node * &head , int data)
{
    Node* newnode = new Node(data);
    if (!head)
    {
        head = newnode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
        cout << "Data " << temp->data << endl;
    }

    temp->next = newnode;
}

int main()
{
    Node* n = new Node(10);

    InsertAtLast(n, 20);
    InsertAtLast(n, 30);
    InsertAtLast(n, 40);
    InsertAtLast(n, 50);

}