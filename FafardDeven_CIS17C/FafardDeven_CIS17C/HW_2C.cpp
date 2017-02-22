/*
Attached: HW_2ABC
========================================
Project: HW_2C.cpp
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Function Prototypes
void getGrades(char[][3], const int ROW, const int COL);
void displayGrades(char arr[][3], const int ROW, const int COL);
void calcGPA(double gpas[5], char arr[][3], const int ROW, const int COL);
void calcAvgGPA(char arr[][3], const int ROW, const int COL);

int main()
{
	const int CLASS_SIZE = 5, CLASS_AMT = 3;
	char grades[CLASS_SIZE][CLASS_AMT];
	double gpas[5] = { 0 };
	
	getGrades(grades, CLASS_SIZE, CLASS_AMT);
	displayGrades(grades, CLASS_SIZE, CLASS_AMT);
	calcGPA(gpas, grades, CLASS_SIZE, CLASS_AMT);
	calcAvgGPA(grades, CLASS_SIZE, CLASS_AMT);
	
	return 0;
}

void getGrades(char arr[][3], const int ROW, const int COL)
{
	ifstream gradeSheet;
	gradeSheet.open("Grades.txt");
	char temp;
	
	if (gradeSheet.is_open())
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				gradeSheet >> temp;
				arr[i][j] = temp;
			}
		}
	}
	else
	{
		cout << "*** UNABLE TO OPEN FILE ***" << endl;
	}
	
	gradeSheet.close();
}


void displayGrades(char arr[][3], const int ROW, const int COL)
{
	cout << "------------- GRADES -------------" << endl
		<< "STUDENT   " << "ENGLISH   " << "HISTORY   " << "MATH      " << endl;

	for (int i = 0; i < ROW; i++)
	{
		cout << "#" << i + 1;
		for (int j = 0; j < COL; j++)
		{
			cout << setw(10) << arr[i][j];
		}

		cout << endl;
	}
}

void calcGPA(double gpas[5], char arr[][3], const int ROW, const int COL)
{
	double sum = 0;
	
	for (int i = 0; i < ROW; i++)
	{
		sum = 0;
		for (int j = 0; j < COL; j++)
		{
			switch (toupper(arr[i][j]))
			{
				case 'A':
					sum += 4;
					break;
				case 'B':
					sum += 3;
					break;
				case 'C':
					sum += 2;
					break;
				case 'D':
					sum += 1;
					break;
				case 'F':
					break;
			}			
		}

		gpas[i] = sum / 3;
	}

	cout << "-------------- GPAS --------------" << endl
		<< "STUDENT   " << "GPA       " << endl;

	for (int i = 0; i < ROW; i++)
	{
		cout << "#" << i + 1;
		cout << setw(10) << fixed << setprecision(2) << gpas[i] << endl;
	}
}

void calcAvgGPA(char arr[][3], const int ROW, const int COL)
{
	cout << "----------  AVERAGE GPAS ----------" << endl
		<< "ENGLISH   " << "HISTORY   " << "MATH      " << endl;

	double sum = 0;

	for (int i = 0; i < COL; i++)
	{
		for (int j = 0; i < ROW; i++)
		{
			switch (toupper(arr[i][j]))
			{
				case 'A':
					sum += 4;
					break;
				case 'B':
					sum += 3;
					break;
				case 'C':
					sum += 2;
					break;
				case 'D':
					sum += 1;
					break;
				case 'F':
					break;
			}
		}

		cout << sum / 5 << "     ";
	}

	cout << endl << endl;
}