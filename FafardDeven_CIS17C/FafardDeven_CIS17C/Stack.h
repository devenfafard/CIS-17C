#include <exception>
#pragma once

class Stack
{
	struct Node { int _id; Node* next; };

private:
	Node* top;
public:
	Stack() { top = nullptr; }
	~Stack()
	{
		Node* temp;
		while (top != nullptr)
		{
			temp = top;
			top = top->next;
			delete temp;
		}
	}

	void push(int id)
	{
		if (!isFull())
		{
			Node* temp = new Node;
			temp->_id = id;
			temp->next = top;
			top = temp;
		}
	}

	void pop(int &id)
	{
		if (!isEmpty())
		{
			Node* temp;
			temp = top;
			top = top->next;
			id = top->_id;
			delete temp;
		}
	}

	Node* returnTop() { return top; }

	bool isEmpty() { return top == nullptr; }

	bool isFull() 
	{
		Node* temp;
		try
		{
			temp = new Node;
			delete temp;
			return false;
		}
		catch(std::bad_alloc)
		{
			return true;
		}
	}

};
