//File: driver.cpp
//Files needed: timeH.h, timeH.cpp
//Compiler used: MS Visual Studio 2017 Professional
//Purpose: To test the Time class
#include "timeH.h"
#include <iostream>
using namespace std;

int main(){
	Time timeObj1;
	Time timeObj2(555550);
	Time timeObj3(3, 30, 0);
	
	cout << "Greenwich Mean Time (GMT)\n" << endl;
	cout << "(Current time) Time object using no-arg constructor..." << endl;
	cout << timeObj1.getHours() << " hr. " << timeObj1.getMinutes() << " min. "<< timeObj1.getSeconds() << " sec." << endl;
	
	cout << "\n\n(Elpased time = 55550) Time object using parameterized \n";
	cout << "(elapsed time) constructor..." << endl;
	cout << timeObj2.getHours() << " hr. " << timeObj2.getMinutes() << " min. "<< timeObj2.getSeconds() << " sec." << endl;
	
	cout << "\n\n(hours = 3, minutes = 30, seconds = 0" << endl;
	cout << "(hours, minutes, seconds) constructor..." << endl;
	cout << timeObj3.getHours() << " hr. " << timeObj3.getMinutes() << " min. " << timeObj3.getSeconds() << " sec." << endl;
	
	timeObj3.setTime(555550);
	
	cout << "\n\nUpdating timeObj3 with the (elapsed time = 555550) method" << endl;
	cout << "setTime(elapsed time) method..." << endl;
	cout << timeObj3.getHours() << " hr. " << timeObj3.getMinutes() << " min. " << timeObj3.getSeconds() << " sec." << endl;
	//You should also test all other functionalities built into your class:
	//1. The constructor that takes 3 parameters (hr., min., and sec.)
	//2. setTime to set an existing object to a different time values
	//
	//(Provide the necessary outputs for these additional testing)
	
	return 0;
}
