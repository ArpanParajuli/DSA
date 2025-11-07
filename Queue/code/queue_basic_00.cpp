#include <iostream>
#include <queue>

using namespace std;

int main()
{
   queue <int> q1;
   q1.push(10); // in c++ push == enqueue // pop = dequeue
   q1.push(20);
   q1.push(30);
   q1.push(40);


   cout << "Size of queue = " <<  q1.size() << endl; // 4


   q1.pop();

   cout << "Size of queue = " <<  q1.size() << endl; // 3 


   /*
   10 (removed)
   20 -> now this
   30
   40
   
   */
   cout << "queue front() = " << q1.front() << endl;

}