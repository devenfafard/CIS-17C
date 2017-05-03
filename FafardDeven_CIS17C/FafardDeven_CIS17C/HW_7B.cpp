/*
Attached: HW_7A, HW_7B
========================================
Project: HW_7B.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/
#include <iostream>
#include "Stack.h"
using namespace std;

const int SIZE = 10;
void getString(Stack* stack, char letters[]);
bool isPalindrome (Stack* stack, char letters[]);

int main()
{
	Stack* stack = new Stack();
	char letters[SIZE];

	cout << "Enter a word:     ";
	getString(stack, letters);
	isPalindrome(stack, letters);

	if (isPalindrome(stack, letters))
	{
		cout << endl << "The word was a palindrome" << endl;
	}
	else
	{
		cout << endl << "The word wasn't a palindrome" << endl;
	}

	return 0;
}

void getString(Stack* stack, char letters[])
{
	for (int i = 0; i < SIZE; i++)
	{
		while (!stack->isFull())
		{
			char c = cin.get();
			stack->push(c);
			letters[i] = c;
		}
	}
}

bool isPalindrome(Stack* stack, char letters[])
{
	while (!stack->isEmpty())
	{
		for (int i = 0; i < SIZE; i++)
		{
			char c;
			stack->pop(c);

			if (c != letters[i])
			{
				return false;
			}
		}
	}
}