#include <iostream>


using namespace std;


template <class T>

class MyStack{
   private:
   T elements[10];
   int index;


   public:

   MyStack()
   {
    index = 0;
   }
   MyStack& push(T value)
   {
      elements[index++] = value;
      return *this;
   }


   MyStack& pop()
   {  
      elements[--index] = 0;
      return *this;
   }


   bool isEmpty()
   {
      return (index == 0) ? true : false;
   }

   bool isFull()
   {
      return (index == 10) ? true : false; 
   }


   T top()
   {
     if(isEmpty() == true)
     {
        return -1;
     }

     else 
     {
        return elements[index-1];
     }
   }
};


int main()
{
   MyStack<int> s1;
   s1.push(10);
   s1.push(20);
   s1.push(30);

   s1.pop().pop(); // with method chaining


   cout << s1.top() << endl; // 10 output


   // check if stack is empty or not


   if(s1.isEmpty())
   {
       cout << "Stack is empty !" << endl;
   }

   else 
   {
    cout << "Stack is not empty" << endl;
   }


   cout << s1.isFull() << endl;
}