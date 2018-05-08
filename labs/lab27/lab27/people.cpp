#include "people.h"
#include <string>
#include <iostream>

using namespace std;

Person::Person() {
	m_name = "";
	m_address = "";
}

Person::Person(string p_name, string p_address) {
	m_name = p_name;
	m_address = p_address;
}

void Person::toString() {
	cout << "NAME: " << m_name << endl;
	cout << "ADDRESS: " << m_address << endl;
}

Employee::Employee()
	:Person()
{
	m_office = "";
	m_dateHired = "";
}

Employee::Employee(string p_name, string p_address, string p_office, string p_dateHired) 
	:Person(p_name, p_address)
{
	m_office = p_office;
	m_dateHired = p_dateHired;
}

void Employee::toString()
{
	Person::toString();
	cout << "OFFICE: " << m_office << endl;
	cout << "DATE HIRED: " << m_dateHired << endl;
}

Faculty::Faculty()
	:Employee()
{
	m_officeHours = "";
	m_rank = "";
}

Faculty::Faculty(string p_name, string p_address, string p_office, string p_dateHired, string p_officeHours, string p_rank)
	:Employee(p_name, p_address, p_office, p_dateHired)
{
	m_officeHours = p_officeHours;
	m_rank = p_rank;
}

void Faculty::toString()
{
	Employee::toString();
	cout << "OFFICE HOURS: " << m_officeHours << endl;
	cout << "RANK: " << m_rank << endl;
}

Staff::Staff()
	:Employee()
{
	m_title = "";
}

Staff::Staff(string p_name, string p_address, string p_office, string p_dateHired, string p_title) 
	:Employee(p_name, p_address, p_office, p_dateHired)
{
	m_title = p_title;
}

void Staff::toString() 
{
	Employee::toString();
	cout << "TITLE: " << m_title << endl;
}