#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>

class Person
{
public:
	Person();
	Person(std::string p_name);
	void showIdentity();
protected:
	std::string m_name;
};

class President: public Person
{
public:
	President();
	President(std::string p_name);
	President(std::string p_name, std::string p_country);
	President(std::string p_name, std::string p_country, std::string p_party);
	President(std::string p_name, std::string p_country, std::string p_party, int p_yearsInOffice);
	void showIdentity();
private:
	std::string m_country;
	std::string m_party;
	int m_yearsInOffice;
};

#endif