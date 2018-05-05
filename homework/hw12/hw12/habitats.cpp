#include "habitats.h"
#include <string>
#include <iostream>
#include <vector>

#include "stdafx.h"

using namespace std;

Habitat::Habitat() {

};

Habitat::Habitat(double p_temperature, double p_humidity) {
	m_temperature = p_temperature;
	m_humidity = p_humidity;
};

void Habitat::setTemperature(double p_temperature) {
	m_temperature = p_temperature;
};

void Habitat::setHumidity(double p_humidity) {
	m_humidity = p_humidity;
};

void Habitat::setASpecies(string p_species) {
	m_species.push_back(p_species);
};

double Habitat::getTemperature() {
	return m_temperature;
};

double Habitat::getHumidity() {
	return m_humidity;
};

void Habitat::displaySpeciesList() {
	for (int i = 0; i < m_species.size(); i++) 
		cout << i + 1 << ". " << m_species[i] << endl;
};



Pond::Pond() {

};

Pond::Pond(double p_temperature, double p_salinity) {
	m_temperature = p_temperature;
	m_salinity = p_salinity;
};

void Pond::setSalinity(double p_salinity) {
	m_salinity = p_salinity;
};

double Pond::getSalinity() {
	return m_salinity;
};