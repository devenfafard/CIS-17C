/*
Attached: HW_2A
========================================
Project: HW_2A.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================


#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getScores(double scores[], int SIZE);
void showMenu();
char getChoice();
void displayResult(char choice, double scores[], int SIZE);

int main()
{
	cout << setprecision(2) << fixed;
	const int SIZE = 5;
	double testScores[SIZE];

	getScores(testScores, SIZE);
	showMenu();
	displayResult(getChoice(), testScores, SIZE);

	return 0;
}

void getScores(double scores[], int SIZE)
{
	cout << "Please enter 5 scores: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Score " << i + 1 << " >> ";
		cin >> scores[i];
	}
}

void showMenu()
{
	cout << endl << "========== MENU ==========" << endl
		<< "<A> : Calculate the average test score" << endl
		<< "<B> : Display all test scores" << endl << endl;
}

char getChoice()
{
	char c;
	cin >> c;
	return c;
}

void displayResult(char choice, double scores[], int SIZE)
{
	double sum = 0, avg = 0;
	switch (tolower(choice))
	{
		case 'a':
			for (int i = 0; i < SIZE; i++)
			{
				sum += scores[i];
			}

			avg = (sum / SIZE);
			cout << endl << "The average test score is " << avg << endl;
			break;

		case 'b':
			cout << endl << "Here are the test scores:" << endl;
			for (int i = 0; i < SIZE; i++)
			{
				cout << scores[i] << endl;
			}
			break;

		default:
			cout << endl << "***INVALID ENTRY***" << endl << endl;
			break;

	}
}
*/