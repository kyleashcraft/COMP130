// lab26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	President presd01;
	President presd02("Barack Obama");   
	President presd03("Pranab Mukherjee", "India"); 
	President presd04("Vladimir Putin", "Russia", "United Russia"); 
	President presd05("François Hollande", "France", "Socialist Party", 3);

	cout << "\nPRESIDENTS......................" << endl; 
	cout << "\nPRESIDENT 1:"; presd01.showIdentity(); 
	cout << "\nPRESIDENT 2:"; presd02.showIdentity(); 
	cout << "\nPRESIDENT 3:"; presd03.showIdentity();
	cout << "\nPRESIDENT 4:"; presd04.showIdentity(); 
	cout << "\nPRESIDENT 5:"; presd05.showIdentity();
    return 0;
}

