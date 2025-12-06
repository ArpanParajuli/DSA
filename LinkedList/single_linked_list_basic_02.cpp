#include <iostream>


using namespace std;



class Node {
public:
    Node* next;
    int data;


    Node(int value) {
        next = nullptr;
        data = value;
    }

};


class LinkedList {
private:
    Node* head;

public:

    LinkedList() {
        head = nullptr;
    }

    void InsertAtStart(int value) {
        Node* NewNode = new Node(value);

        if (head == nullptr) {
            head = NewNode;
            cout << "Head was null so new node given to head!" << endl;
            return;
        }

        NewNode->next = head;
        head = NewNode;

    }

    void InsertAtNth(int value , int position) {
        
        if (position < 0) {
            cout << "Position is invalid!" << endl;
            return;
        }

        Node* NewNode = new Node(value);

        if (head == nullptr) {
            head = NewNode;
            cout << "Head was null so new node given to head!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr && position > 0) {
            temp = temp->next;
            position--;
        }

        NewNode->next = temp->next;

        temp->next = NewNode;

    }

    void InsertAtEnd(int value) {
        Node* NewNode = new Node(value);
        if (head == nullptr) {
            cout << "List is empty! inserting in head!" << endl;
            head = NewNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = NewNode;
    }


    void Display() {

        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;

        while (temp != NULL) {
            cout << "Node : " << temp->data << endl;
            temp = temp->next;
        }
    }


};


int main()
{
    LinkedList l1;
    l1.InsertAtStart(1);

    l1.InsertAtEnd(2);
    l1.InsertAtEnd(3);
    l1.InsertAtEnd(4);


    l1.InsertAtNth(6, 2);



    l1.Display();
}