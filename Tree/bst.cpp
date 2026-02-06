#include <iostream>
#include <queue>

using namespace std;


int x; // for left
int y; // for right
int n;



class Node {
 
    public:
    int data;
    Node * left , *right;
   


    Node(int n) {

        data = n;
        left = nullptr;
        right = nullptr;

    }
};



int main()
{
    queue <Node *> q;
    cout << "enter the root element = " << endl;
    cin >> n;
    Node * root = new Node(n);

    q.push(root);


    while(!q.empty()) {
       
        Node * temp = q.front();
        q.pop();

        cout << "enter the left child = " << endl;
        cin >> x;

        if(x != -1){
            temp->left = new Node(x);
            q.push(temp->left);
        }


       cout << "enter the right child = " << endl;
        cin >> y;

        if(y != -1) {
            temp->right = new Node(y);
            q.push(temp->right);
        }

    }


    return 0;
}