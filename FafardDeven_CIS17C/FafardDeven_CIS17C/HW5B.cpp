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
	//With iterator
	for (it; it != cities.end(); it++)
	{
		//cout << cities[it];
	}



	return 0;
}