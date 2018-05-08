#include "people.h"
#include "stdafx.h"

using namespace std;

Person::Person() {
	m_name = "";
};

Person::Person(string p_name) {
	m_name = p_name;
};

void Person::showIdentity() {
	cout << "Name:\t" << m_name << endl;
};

President::President() 
	:Person()
{
	m_country = "";
	m_party = "";
	m_yearsInOffice = 0;
}

President::President(string p_name)
	:Person(p_name)
{
	m_country = "";
	m_party = "";
	m_yearsInOffice = 0;
}

President::President(string p_name, string p_country) 
	:Person(p_name)
{
	m_country = p_country;
	m_party = "";
	m_yearsInOffice = 0;
};
President::President(string p_name, string p_country, string p_party)
	:Person(p_name)
{
	m_country = p_country;
	m_party = p_party;
	m_yearsInOffice = 0;
};

President::President(string p_name, string p_country, string p_party, int p_yearsInOffice)
	:Person(p_name)
{
	m_country = p_country;
	m_party = p_party;
	m_yearsInOffice = p_yearsInOffice;
};
void President::showIdentity() {
	Person::showIdentity();
	cout << "Country:\t" << m_country << endl;
	cout << "Party:\t" << m_party << endl;
	cout << "Years in office:\t";
	m_yearsInOffice >= 1 ? (cout << m_yearsInOffice) : (cout << "Unknown or less than one") ;
	cout << endl;
};

