#include <iostream>
using namespace std;

class Node
{
  public:
  Node * next;
  int value;
  
  
  Node(int n)
  {
	value = n;
    next = nullptr;
  }
  	
};


class CircularLL
{
  public:
  Node * head;


  CircularLL()
  {
    head = nullptr;
  }
  
  bool isEmpty()
  {
    return head == NULL;
  }
     
	
  void InsertAtFirst(int n)
  { 
     Node * newnode = new Node(n);

    if(isEmpty())
    {
        head = newnode;
        head->next = head; // head pointing to head
        return;
    }

    Node * temp = head;


    while(temp->next != head){
        temp = temp->next;
    }

    //  Node * temp = head;
    newnode->next = head;
    temp->next = newnode; // tails point to head
    head = newnode; // current head also point to new head
  }

  void InsertAtLast(int n)
  {
    Node * newnode = new Node(n);


    if(isEmpty())
    {
        head = newnode;
        head->next = head;
        return;
    }


    Node * temp = head;

    while(temp->next != head)
    {
       temp = temp->next;
    }
     
      newnode->next = head;
     temp->next = newnode;
  }



  void display()
  {

    if(isEmpty())
      return;


  Node * temp = head;

  while(temp->next != head)
  {
    cout << temp->value << " -> ";
    temp = temp->next;
  }

  }
	
	
};

int main()
{
	
	CircularLL ll;
    ll.InsertAtFirst(50);
    ll.InsertAtLast(10);
     ll.InsertAtLast(20);
      ll.InsertAtLast(30);
       ll.InsertAtLast(40);

       ll.display();
	
	return 0;
}