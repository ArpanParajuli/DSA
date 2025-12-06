#include <iostream>


using namespace std;



class Node {
public:
    Node* previous;
    Node* next;
    int data;


    Node(int value) {
        next = nullptr;
        previous = nullptr;
        data = value;
    }

};


// doubly linked list

class LinkedList {
private:
    Node* head;
    int size;

public:

    LinkedList() {
        head = nullptr;
        this->size = 0;
    }


    void InsertAtFront(int data) {
      
        Node * NewNode = new Node(data);

        if (head == nullptr) {
            cout << "Head is null inserting new node on it!" << endl;
            head = NewNode;
            size++;
            return;
        }


        head->previous = NewNode;
        NewNode->next = head;


        head = NewNode;
        size++;
  
    }


    void InsertAtEnd(int value) {
        Node* NewNode = new Node(value);


        if (head == nullptr) {
            head = NewNode;
            size++;
            return;
        }


        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp->next = NewNode;
        NewNode->previous = temp;

        size++;
    }
    

    void InsertAtNth(int value , int position) {
        Node* NewNode = new Node(value);

        if (position < 0 || position > size) {
            cout << "Invalid node position!" << endl;
            return;
        }

        if (position == 0) {
            InsertAtFront(value);
            return;
        }

        if (head == nullptr) {
            head = NewNode;
            size++;
            return;
        }



        Node* temp = head;

        while (temp->next != nullptr && position > 0) {
            temp = temp->next;
            position--;
        }

        NewNode->next = temp->next;
        NewNode->previous = temp;

        temp->next = NewNode;

        size++;

    }


    void Display() {
        if (head == nullptr) {
            cout << "Linked list is empty!" << endl;
            return;
        }


        Node* temp = head;

        while (temp != nullptr) {
            cout << "Node : " << temp->data << endl;
            cout << "Node addr : " << temp << endl;
            cout << "previous : " << temp->previous << endl;
            cout << "next : " << temp->next << endl;
            temp = temp->next;
        }

        
    } 

};


int main()
{
    LinkedList l1;

    l1.InsertAtFront(1);
    l1.InsertAtFront(2);
    l1.InsertAtFront(3);


    l1.InsertAtEnd(4);

    l1.InsertAtNth(6, 100);
    l1.InsertAtEnd(5);

    l1.Display();

}