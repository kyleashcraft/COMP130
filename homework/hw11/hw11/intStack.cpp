#include "stdafx.h"

using namespace std;

StackOfIntegers::StackOfIntegers() { //initializes empty Stack
	first = nullptr;
	last = nullptr;
	size = 0;
}

void StackOfIntegers::push(int p_value) { //Add a number to the top of the integer stack
	stackItem *temp = nullptr; 
	temp = new stackItem(p_value);
	if (size == 0) { //if the stack is empty...
		first = temp; //the first item in the stack is the new stackItem
		last = first; //and the last stack item is the same as the first
	}
	else { //otherwise (the stack is NOT empty)
		last->rlink = temp; //the current last gets linked to the new last item
		temp->llink = last; //set the new items left link to the temp link
		last = temp; //reset the last pointer to the new last value
	}
	size++; //increment the integer stack size counter by 1
}


//Returns value attribute of stackItem at the top of the stack
//Returns a NaN int if the stack is empty
int StackOfIntegers::peek() const { 
	return (size > 0 ? last->value : numeric_limits<int>::quiet_NaN() );
}

//bool function return false if stack is not empty
//returns true if stack size is 0 (i.e. empty)
bool StackOfIntegers::empty() const { 
	return size > 0 ? false : true;
}

//removes stackItem from top of the stack
//returns the integer value attached to the last stack item
//decrements size by 1 accordingly
//if stack is empty simply returns NaN int (reads as zero
int StackOfIntegers::pop() {
	if (size > 0) {
		int val = last->value;
		stackItem *temp = last;

		last = last->llink;

		temp = nullptr;
		delete temp;

		size--;

		return val;
	}
	else {
		return numeric_limits<int>::quiet_NaN();
	}
}

//returns the number of items in a stack as an integer
int StackOfIntegers::getSize() const {
	return size;
}

stackItem::stackItem(int p_value) { //initializing a stack item requires a value input value
	rlink = nullptr;
	llink = nullptr;
	value = p_value;
}