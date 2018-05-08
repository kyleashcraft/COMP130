#include <iostream>
#include <string>

#include "people.h"

using namespace std;

int main() {

	Person *ptr[4];

	ptr[0] = new Person("Grandma Ethel", "001 Charm St.");
	ptr[1] = new Employee("Boss Man", "007 Bond St.", "Bldg. 1 #007", "01-31-1970");
	ptr[2] = new Faculty("Dr. John", "234 Saddie St.", "Math Building #112", "5-15-2010", "MW 2:00pm - 4:00pm", "Associate Professor");
	ptr[3] = new Staff("Paul", "007 Bond St.", "Bldg. 1 #998", "01-31-2017", "Data Entry Specialist");

	for (int i = 0; i < 4; i++) {
		cout << "~~~~~PERSON " << i + 1 << "~~~~~" << endl;
		ptr[i]->toString();
		cout << endl;
	}


	return 0;
}