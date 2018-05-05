#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <iostream>
#include <string>
#include <vector>

class Habitat
{
public:
	Habitat();
	Habitat(double p_temperature, double p_humidity);
	//setters
	void setTemperature(double p_temperature);
	void setHumidity(double p_humidity);
	void setASpecies(std::string p_species);
	//getters
	double getTemperature();
	double getHumidity();
	void displaySpeciesList();
protected:
	double m_temperature = 0.0;
	double m_humidity = 0.0; 
	std::vector<std::string> m_species;
	int numSpecies = 0;
};

class Pond : public Habitat {
public:
	Pond(); 
	Pond(double p_temperature, double p_salinity);
	//setter 
	void setSalinity(double p_salinity);
	//getter
	double getSalinity();
private:
	double m_salinity;
};

#endif