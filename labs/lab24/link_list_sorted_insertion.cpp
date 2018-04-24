//Purpose: Create a link list of size 10 of sorted values from 10 to 100
//Compiler: MS visual studio 2017
//date: 4/23/2018

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	
	const int SIZE = 10;

	struct Node 
	{
		int data = 0;
		Node *link = NULL;
	};

	Node *lowerPtr = NULL;
	Node *upperPtr = NULL;

	lowerPtr = new Node;
	upperPtr = new Node;

	lowerPtr->data = 9;
	upperPtr->data = 101;
	
	lowerPtr->link = upperPtr;
	upperPtr->link = NULL;

	Node *mov = NULL;
	Node *newPtr = NULL;

	for (int i = 0; i < SIZE; i++)
	{
		int newVal = 10 + rand() % (100 - 10 + 1);
		bool replaced = false;
		mov = new Node;
		mov->link = lowerPtr;
		newPtr = new Node;
		while (!replaced)
		{
			if (mov->link->data > newVal)
			{
				newPtr->data = newVal;
				newPtr->link = mov->link;
				mov->link = newPtr;
				replaced = true;
			}
			mov = mov->link;
		}
	}

	mov = lowerPtr->link;

	for (int i = 0; i < SIZE; i++)
	{
		cout << mov->data << "   ";
		mov = mov->link;
	}

	return 0;
}

