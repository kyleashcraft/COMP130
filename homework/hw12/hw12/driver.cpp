//driver.cpp
//Name: Kyle Ashcraft
//Date: 5/3/18
//Compiler used: MS Visual Studio 2018 
//Files needed: habitats.h and habitats.cpp
//Purpose:  Test the pond class and all inherited functionalities from Habitat base class

#include "stdafx.h"
#include <iostream>
#include <string>
#include "habitats.h"

using namespace std;

int main()
{
	//Test no-arg constructor
	Pond fishPond1;

	cout << "*** Add species to the pond habitat 1 ***";
	//All these functionalities are inherited from Habitat
	fishPond1.setASpecies("alligators");
	fishPond1.setASpecies("dragonflies");
	fishPond1.setASpecies("gold fish");
	fishPond1.setASpecies("frogs");
	fishPond1.setASpecies("water hyacinth");
	fishPond1.setASpecies("ducks");
	cout << "\nSetting current temperature(82.5), air humidity (95%)...\n";
	fishPond1.setTemperature(82.5);
	fishPond1.setHumidity(95);
	cout << "Temperate in the pond: " << fishPond1.getTemperature() << endl;
	cout << "Air humidity: " << fishPond1.getHumidity() << endl;
	cout << "Current species in the pond...\n";
	fishPond1.displaySpeciesList();

	//Functionalities from Pond class
	fishPond1.setSalinity(0.005);
	cout << "Salinity: " << fishPond1.getSalinity() << endl;

	//Pond 2
	//Test parameterized Pond constructor 
	cout << "\n\n*** Add species to the pond habitat 2 ***\n";
	Pond fishPond2(100, 99); //temperature and salinity	
	fishPond2.setASpecies("millards");
	fishPond2.setASpecies("lillies");
	fishPond2.setASpecies("eels");
	fishPond2.setASpecies("toads");
	fishPond2.setASpecies("grass carps");

	cout << "Setting humidity(65%)...\n";
	fishPond2.setHumidity(65);
	cout << "Temperature = " << fishPond2.getTemperature() << endl;
	cout << "Air humidity = " << fishPond2.getHumidity() << endl;
	cout << "Salinity = " << fishPond2.getSalinity() << endl;
	cout << "Current species in the pond...\n";

	fishPond2.displaySpeciesList();

	cout << endl;

    return 0;
}

