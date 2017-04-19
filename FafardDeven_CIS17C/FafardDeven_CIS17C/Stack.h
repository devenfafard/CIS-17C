class FullStack {};

#pragma once
#include <iostream>

template <class T, int MAX_ITEMS>
class Stack
{
	private:
		T items[MAX_ITEMS];
		int top;
	public:
		Stack() { top = -1; }
		~Stack() { }
		void makeEmpty() { top = -1; }
		void push(T item)
		{
			if (isFull())
			{
				throw FullStack();
			}
			top++; items[top] = item; 
		}
		void pop(T &item) { item = items[top]; top--; }
		bool isEmpty() { return (top == -1); }
		bool isFull() { return (top == MAX_ITEMS - 1); }
};
 