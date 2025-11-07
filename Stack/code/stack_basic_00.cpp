#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack <int>s;
    s.push(10); // push the element into stack
    s.push(20);
    s.push(30);



    cout << s.size() << endl; // get stack size

    s.pop(); // removes the element from stack from last push
    
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;


    return 0;
}