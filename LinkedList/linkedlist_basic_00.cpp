#include <iostream>

using namespace std;

class Node{
  public:
  int data;
  Node * next;




   public:

   Node(int value)
   {
      data = value;
      next = nullptr;
   }



};


int main()
{
    Node*  n1 = new Node(1);
    n1->next = new Node(2);
    n1->next->next = new Node(3);
    n1->next->next->next = new Node(4);


    while((n1->next != nullptr))
    {
        cout << n1->data << endl;
        cout << n1->next << endl;
        n1 = n1->next;
    }
}