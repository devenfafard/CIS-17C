//Attached: HW_3A, 3B, 3C
//====================================================
//Project: HW_3A
//====================================================
//Programmer: Deven Fafard
//Class: CIS 17A
//====================================================

#include "UnsortedList.h"

char getChoice();

int main()
{
	UnsortedList list;

	char choice;
	int item = 0;

	choice = getChoice();

	while (tolower(choice) != 'c')
	{
		if (tolower(choice) == 'a')
		{
			if (!list.isFull())
			{
				cout << "Enter number: ";
				cin >> item;
				list.insertItem(item);
				choice = getChoice();
			}
			else
			{
				cout << "List is full!" << endl << endl;
			}
		}
		else if (tolower(choice) == 'b')
		{
			if (!list.isEmpty())
			{
				cout << "Enter number you want deleted: ";
				cin >> item;
				list.deleteItem(item);
				choice = getChoice();
			}
			else
			{
				cout << "List is empty!" << endl << endl;
			}
		}
		else
		{
			cout << "Choice was invalid!" << endl << endl;
		}
	}


	cout << endl << endl << "Displaying list..." << endl;
	list.displayList();

	return 0;
}

char getChoice()
{
	char choice;
	cout << "<A> Insert a number into the list." << endl
		 << "<B> Delete a number from the list." << endl
		 << "<C> Display list." << endl << endl;
	cin >> choice;
	
	return choice;
}