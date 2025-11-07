#include <iostream>
#include <stack>


using namespace std;


int main()
{
    stack <int> s1;

    s1.push(10);
    s1.push(20);


    cout << s1.top() << endl; // Access top element
    bool isStackEmpty = s1.empty();
    cout << isStackEmpty << endl;

    if(!isStackEmpty)
    {
       cout << "Stack is not empty" << endl;
    }

    else
    {
        cout << "Stack is  empty!" << endl;
    }

     cout << s1.top() << endl;

    return 0;
}