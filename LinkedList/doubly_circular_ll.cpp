#include <iostream>

using namespace std;


class Node
{

    public:
    Node * prev;
    Node * next;
    int data;


    Node(int n)
    {
        data = n;
        prev = nullptr;
        next = nullptr;
    }
};



class DoublyCircularLL{
    public:
    Node * head;
    Node * tail;


    bool isEmpty()
    {
        return head == nullptr;
    }

    DoublyCircularLL()
    {
        head = nullptr;
        tail = nullptr;
    }


    void InsertAtLast(int n)
    {
        Node * newnode = new Node(n);

        if(isEmpty())
        {
          head = tail = newnode;
          head->next = head;
          head->prev = head;
          return;
        }

        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }


    void display()
    {
        Node * temp = head;
        
        do
        {
             cout << temp->data << " -> ";
             temp = temp->next;
        }
        
        while(temp != head);
    }
};


int main()
{
  DoublyCircularLL ll;
  ll.InsertAtLast(10);
  ll.InsertAtLast(20);
  ll.InsertAtLast(30);


  ll.display();
}