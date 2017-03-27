/*
Attached: HW_5A, 5B
========================================
Project: HW_5B.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/

#include <iostream>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> cities;
	cities.push_back("Venice");
	cities.push_back("Paris");
	cities.push_back("Dublin");

	vector<string>::iterator it = cities.begin();
	vector<string>::reverse_iterator rit = cities.rbegin();

	//With subscript
	cout << "Here's the list outputted with subscript: " << endl;
	for (unsigned int i = 0; i < cities.size(); i++)
	{
		cout << cities[i] << endl;
	}
	cout << endl;

	//With iterator
	cout << "Here's the list outputted with an iterator: " << endl;
	for (it; it != cities.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;

	//With reverse iterator
	cout << "Here's the list outputted with the reverse iterator: " << endl;
	for (rit; rit != cities.rend(); rit++)
	{
		cout << *rit << endl;
	}
	cout << endl;

	cout << "There are " << cities.size() << " cities in this list." << endl;
	cout << "The second city in the list is " << cities[1] << "." << endl;

	string temp = cities[1];
	cities[1] = cities[0];
	cities[0] = temp;

	cout << "After swapping, the second city is " << cities[1] << "." << endl << endl;

	return 0;
}