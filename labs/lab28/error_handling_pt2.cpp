#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

int getProductID(int ids[], string names[], int numProducts, string
	target)
{

		for (int i = 0; i < numProducts; i++)
		{
			if (names[i] == target)
				return ids[i];
		}

		exception e("ERROR: ITEM NOT FOUND --> ");
		throw e;
}

int main()
{
	int productIds[] = { 4, 5, 8, 10, 13 };
	string products[] = { "Computer", "flash drive",
		"mouse", "printer", "camera" };
	try
	{
		cout << getProductID(productIds, products, 5, "mouse") << endl;
		cout << getProductID(productIds, products, 5, "camera") << endl;
		cout << getProductID(productIds, products, 5, "laptop") << endl;
	}
	catch (exception e)
	{
		cout << e.what() << "laptop";
	}
	return 0;
}

