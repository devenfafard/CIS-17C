/*
Attached: HW_5A, 5B
========================================
Project: HW_5A.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/

#include <iostream>
#include <list>
using namespace std;

void getNumbers(list <int>& _list);
int addNumbers(list <int>& _list);
void displaySum(list <int>& _list, int _sum);

int main()
{
	list <int> aList(5, 0);
	getNumbers(aList);
	displaySum(aList, addNumbers(aList));

	return 0;
}

void getNumbers(list <int>& _list)
{
	list <int>::iterator it = _list.begin();
	for (it; it != _list.end(); it++)
	{
		cout << "Enter a value: ";
		cin >> *it;
	}

	cout << endl;
}

int addNumbers(list <int>& _list)
{
	list <int>::iterator it = _list.begin();
	int sum = 0;

	for (it; it != _list.end(); it++)
	{
		sum += *it;
	}

	return sum;
}

void displaySum(list <int>& _list, int _sum)
{
	cout << "Here's the list: " << endl;

	list <int>::iterator it = _list.begin();
	for (it; it != _list.end(); it++)
	{
		cout << *it << "   ";
	}

	cout << endl << "The sum equals: " << _sum << endl;
}