//Names: Kyle and Agneya
//Date: 4-16-2018
//Compiler: MS Visual Studio 2017
//Purpose: Lab 22

#include <iostream>
#include <string>
#include "MyList_H.h"

using namespace std;

int main(){
	MyList<int> intList;
	cout << "Building a list of integers...  ";
	intList.addItem(11);
	intList.addItem(22);
	intList.addItem(33);
	intList.addItem(44);
	intList.displayList();
	MyList<string> stringList;
	cout << "\nBuilding a list of strings...  ";
	stringList.addItem("Earth");
	stringList.addItem("Wind");
	stringList.addItem("Fire");
	stringList.displayList();
	
	return 0;
}