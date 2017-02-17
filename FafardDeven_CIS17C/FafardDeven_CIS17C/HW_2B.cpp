/*
Attached: HW_2ABC
========================================
Project: HW_2B.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getData(int arr[][4]);
void displayData(int arr[][4]);

int main()
{
	int numArray[3][4] = { 0 };
	getData(numArray);
	displayData(numArray);

	return 0;
}

void getData(int arr[][4])
{
	cout << "Enter data into the 2-D array: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << endl;
}

void displayData(int arr[][4])
{
	cout << "Here's the data in the 2-D array: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(5) << arr[i][j];
		}

		cout << endl;
	}

	cout << endl;
}