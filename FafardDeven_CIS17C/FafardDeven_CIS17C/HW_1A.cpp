/*
Attached: HW_1A
========================================
Project: HW_1A.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/

#include <iostream>
#include <fstream>
using namespace std;

//Function Prototypes
void getNumbers(int nums[], int SIZE);
void showNumbers(int nums[], int SIZE);

int main()
{
	const int SIZE = 20;
	int numbers[SIZE] = { 0 };

	getNumbers(numbers, SIZE);
	showNumbers(numbers, SIZE);

	return 0;
}

void getNumbers(int nums[], int SIZE)
{
	ifstream inputFile;
	inputFile.open("Data.txt");
	for (int i = 0; i < SIZE; i++)
	{
		inputFile >> nums[i];
	}

	inputFile.close();
}

void showNumbers(int nums[], int SIZE)
{
	cout << "Here are the nummbers:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << nums[i] << endl;
	}
}