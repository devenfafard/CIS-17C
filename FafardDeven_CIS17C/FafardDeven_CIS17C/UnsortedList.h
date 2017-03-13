#pragma once
#include <iostream>
using namespace std;


const int MAX_SIZE = 10;

class UnsortedList
{
	private:
		int numbers[MAX_SIZE];
		int length;

	public:
		UnsortedList();
		~UnsortedList();
		void insertItem(int item);
		void deleteItem(int item);
		void displayList();
		bool isFull();
		bool isEmpty();

};
