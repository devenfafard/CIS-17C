/*
Attached: HW_10A
========================================
Project: HW_10A.h
========================================
Programmer: Deven Fafard
Class: CIS-17C
========================================
*/
#pragma once

const int SIZE = 101;

class IntegerSet
{
	private:
		int nums[SIZE] = { 0 };
	public:
		IntegerSet() {};
		IntegerSet(int* ptr, int size);
		IntegerSet unionSet(IntegerSet s2);
		IntegerSet intersectionSet(IntegerSet s2);
		bool isEqualTo(IntegerSet s2);
		bool isEmpty();
		bool isFull();
		int cardinalityIs();
		void insertElement(int n);
		void deleteElement(int n);
		void printSet();
};