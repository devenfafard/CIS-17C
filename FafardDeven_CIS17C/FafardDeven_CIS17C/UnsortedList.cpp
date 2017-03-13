#include "UnsortedList.h"

UnsortedList::UnsortedList()
{
	length = 0;
}

UnsortedList::~UnsortedList()
{
}

void UnsortedList::insertItem(int item)
{
	numbers[length] = item;
	length++;
}

void UnsortedList::deleteItem(int item)
{
	int location = 0;

	while (item != numbers[location] && location < length)
	{
		location++;
	}

	if (location == length)
	{
		cout << "The item is not on the list." << endl;
	}

	if (location < length)
	{
		numbers[location] = numbers[--length];
		cout << "Item has been deleted!";
	}
}

void UnsortedList::displayList()
{
	int location = 0;

	while (location < length)
	{
		cout << numbers[location] << endl;
		location++;
	}

	if (location == 0)
	{
		cout << "List is empty!" << endl;
	}
}

bool UnsortedList::isFull()
{
	if (length == MAX_SIZE)
	{
		return true;
	}

	return false;
}

bool UnsortedList::isEmpty()
{
	if (length == 0)
	{
		return true;
	}

	return false;
}
