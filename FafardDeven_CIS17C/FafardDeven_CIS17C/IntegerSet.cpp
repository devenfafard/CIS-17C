#include <iostream>
#include "IntegerSet.h"
using namespace std;

IntegerSet::IntegerSet(int* ptr, int size)
{
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		nums[(ptr[i])] = 1;
	}
}

IntegerSet IntegerSet::unionSet(IntegerSet s2)
{
	IntegerSet result;
	for (int i = 0; i < SIZE; i++)
	{
		if ((nums[i] == 1) || (s2.nums[i] = 1))
		{
			result.nums[1] = 1;
		}
	}

	return result;
}

IntegerSet IntegerSet::intersectionSet(IntegerSet s2)
{
	IntegerSet result;
	for (int i = 0; i < SIZE; i++)
	{
		if ((nums[i] == 1) && (s2.nums[i] == 1))
		{
			result.nums[i] = 1;
		}
	}

	return result;
}

bool IntegerSet::isEqualTo(IntegerSet s2)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] != s2.nums[i])
		{
			return false;
		}
	}

	return true;
}

bool IntegerSet::isEmpty()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] != 0)
			return false;
	}

	return true;
}

bool IntegerSet::isFull()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] == 0)
			return false;
	}

	return true;
}

int IntegerSet::cardinalityIs()
{
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] == 1)
		{
			count++;
		}
	}

	return count;
}

void IntegerSet::insertElement(int n)
{
	if (n < SIZE && n >= 0)
	{
		nums[n] = 1;
	}
}

void IntegerSet::deleteElement(int n)
{
	if (n < SIZE && n >= 0)
	{
		nums[n] = 0;
	}
}

void IntegerSet::printSet()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] == 1)
		{
			cout << i << " ";
		}
	}
}