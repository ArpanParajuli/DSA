#include <iostream>

using namespace std;



class Node {
public:
	Node* next;
	int value;


public:
	Node(int data) {
		next = nullptr;
		value = data;
	}
};


class StackLinkedList {
private:
	Node* head;





public:


	StackLinkedList() {
		head = nullptr;
	}

	void push(int data) { // works as insert at head

		Node* NewNode = new Node(data);
		NewNode->next = head;
		head = NewNode;

	}

	int pop() {
		if (head == nullptr) {
			cout << "Stack is empty!" << endl;
			return -1;
		}

		Node* temp = head;

		int value = temp->value;

		head = head->next;
		delete temp;
		return value;
	}


	 int peek() {

		if (head == nullptr) {
			cout << "Stack is empty!" << endl;
			return -1;
		}

		return head->value; // sends last linked list value
	}


	void display() {

		if (head == nullptr) {
			cout << "list is empty!" << endl;
			return;
		}

		Node* temp = head;

		while (temp != nullptr) {
			cout << "Node -> " << temp->value << endl;
			temp = temp->next;
		}
	}
};

int main()
{

	StackLinkedList stl;

	stl.push(10);
	stl.push(20);
	stl.push(30);
	stl.push(40);

	stl.display();



	 cout <<  stl.peek() << endl;



	stl.display();

	return 0;
}