#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>

class Person
{
public:
	Person();
	Person(std::string, std::string);
	virtual void toString();
private:
	std::string m_name;
	std::string m_address;
};

class Employee : public Person
{
public:
	Employee();
	Employee(std::string, std::string, std::string, std::string);
	void toString();
private:
	std::string m_office;
	std::string m_dateHired;
};

class Faculty : public Employee
{
public:
	Faculty();
	Faculty(std::string, std::string, std::string, std::string, std::string, std::string);
	void toString();
private:
	std::string m_officeHours;
	std::string m_rank;
};

class Staff : public Employee
{
public:
	Staff();
	Staff(std::string, std::string, std::string, std::string, std::string);
	void toString();
private:
	std::string m_title;
};



#endif