#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>

using namespace std;

template<class T>
class MyList { 
public:
	typedef T value_type;
	MyList();
	void addItem(T p_newItem);
	void displayList();
private:
	T arr[10];
	int size;
	const int capacity = 10; 
};

template<class T>
MyList<T>::MyList()
{
	size = 0;
	for (int i = 0; i < capacity; i++)
	{
		arr[i] = value_type();
	}
}

template<class T>
void MyList<T>::addItem(T p_newItem)
{
	arr[size++] = p_newItem;
}

template<class T>
void MyList<T>::displayList()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

#endif