#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int arry[5]{ 0 };
	cout << "Array content... \n";
	for (int i = 0; i < 5; i++)
	{
		cout << arry[i];
	}
	cout << endl;

	int inp = 0;
	for (int i = 0; i < 2; i++)
	{
		cout << "Input a valid array index: ";
		cin >> inp;

		try
		{
			if (inp < 0)
			{
				exception e1("ERROR: index out of bounds, cannot be less than zero.");
				throw e1;
			}
			if (inp >= 5)
			{
				exception e2("ERROR: index out of bounds, the maximum index is 4.");
				throw e2;
			}
		}

		catch (exception e)
		{
			cout << e.what();
			cout << endl;
		}
	}
	return 0;
}
