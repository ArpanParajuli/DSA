#include <iostream>
using namespace std;

template <class T>

class MyQueue{
    private:
    T *elements;
    int index;

    public:
    MyQueue(int SizeOfQueue)
    {
      index = 0;
      elements = new T[SizeOfQueue];
    }

    ~MyQueue()
    {
        delete elements; // free heap memory after use
    }

    MyQueue& enqueue(T value)
    {
      elements[index++] = value;
    }

    MyQueue& dequeue()
    {
        temp++;
    }

    T front()
    {
        return elements[0];
    }

    int size()
    {
      return index;
    }
};

int main()
{
  MyQueue <int> q1(10);

  q1.enqueue(10);
  q1.enqueue(20);
  q1.enqueue(30);

  q1.dequeue();


  cout << q1.front() << endl;

  cout << q1.size() << endl;
}