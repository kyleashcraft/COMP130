//HW11
//Kyle Ashcraft
//5/2/18
//Compiler: MS V.S. 2017 Community Edition

#include "stdafx.h" //using precompiled header

using namespace std;

int main()
{
	StackOfIntegers myStack;
	cout << "New stack created... \n\n";

	cout << "Stack should be empty. \nmyStack.empty(): " << (myStack.empty() ? "true\n\n" : "false\n\n");

	cout << "Pushing 4 to stack... \n\n";

	myStack.push(4);

	cout << "Stack should no longer be empty...\n";

	cout << "myStack.empty: " << (myStack.empty() ? "true\n\n" : "false\n\n");

	cout << "Pushing 5, 6, 7 to stack...\n\n";

	myStack.push(5);
	myStack.push(6);
	myStack.push(7);

	cout << "Stack size should now be 4...\n";
	
	cout << "myStack.getSize(): " << myStack.getSize() << endl << endl;

	cout << "Popping from the stack should return 7...\n";
	cout << "myStack.pop(): " << myStack.pop() << endl << endl;

	cout << "Size should now be 3...\n";
	cout << "myStack.getSize(): " << myStack.getSize();

	cout << "\n\nmyStack.peek() should return 6, the next item in the stack...\n";
	cout << "myStack.peek(): " << myStack.peek();

	cout << "\n\nPopping the stack 3 more times...";
	myStack.pop();
	myStack.pop();
	myStack.pop();

	cout << "\n\nmyStack.getSize() should return 0...\n";
	cout << "myStack.getSize(): " << myStack.getSize();

	cout << "\n\nTrying to pop on an empty stack. Value should return NaN...\n";
	int popped = myStack.pop();
	
	cout << "myStack.pop(): " << popped;

	cout << "\nmyStack.pop() == numeric_limits<int>::quiet_NaN(): " << (popped == numeric_limits<int>::quiet_NaN() ? "true" : "false");

	cout << "\n\nmyStack.peek() should also return NaN now...\n";
	int peeked = myStack.peek();

	cout << "myStack.peek(): " << peeked;
	cout << "\nmyStack.peek() == numeric_limits<int>::quiet_NaN(): " << (peeked == numeric_limits<int>::quiet_NaN() ? "true" : "false");

    return 0;
}