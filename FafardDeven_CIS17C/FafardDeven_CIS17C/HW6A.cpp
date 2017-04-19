#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int SIZE = 9;
	Stack <char, SIZE> letters;
	string word;
	string reverseWord;

	cout << "Enter a word:     ";
	getline(cin, word);

	for (char c : word)
	{
		try
		{
			letters.push(c);
		}
		catch (FullStack)
		{
			cout << " *** FULL STACK EXCEPTION THROWN *** " << endl;
		}
	}

	cout << "Here is the word backwards:     ";
	
	
	
	return 0;
}