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


class Queue {

public:

	Node* head; // like front
	Node* tail; // rear
 

	Queue() {
		head = nullptr;
		tail = nullptr;
	}


	void enqueue(int data) {
		Node* NewNode = new Node(data);


		if (tail == nullptr) {
			head = tail = NewNode;
			return;
		}


		tail->next = NewNode;
		
		tail = NewNode;
	}

	int dequeue() {
		if (head == nullptr) {
			cout << "queue is empty!" << endl;
			return -1;
		}


		Node* temp = head;

		int val = head->value;

		head = head->next;


		if (head == nullptr) {
			tail = nullptr;
		}

		delete temp;
		return val;
	}

	int peek() {

		if (head == nullptr) {
			cout << "queue is empty!" << endl;
			return -1;
		}

		return head->value;
	}
};


int main()
{
	Queue q1;

	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(40);


	// 10 -> 20 -> 30 -> 40
	cout << q1.dequeue() << endl; // 10
	cout << q1.peek() << endl; // 20 

	return 0;
}