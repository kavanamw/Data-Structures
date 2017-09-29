#include "stdafx.h"
#include<iostream>
#include<array>
using namespace std;
#define MaxElm 20

template<class X>
class orderedlist
{
protected:
	X *array[MaxElm];
	int idx = 0;
public:
	//adds and sorts an item to the array of pointers
	void AddItem(X TempInput)
	{
		//sets first element to the begining of the array
		//seems to work as intended
		if (idx == 0)
		{
			array[0] = new X;
			*array[0] = TempInput;
			idx++;
			return;
		}
		else if (idx == MaxElm)
		{
			cout << "Array is full!";
			return;
		}
		//prefill the array
		//*array[idx] = TempInput;
		//idx++;
		//sort array
		else
		{
			for (int t = 0; t < MaxElm - 1; t++)
			{
				if (*array[t] > TempInput)
				{
					array[idx] = new X;
					for (int x = idx; x > t; x--)
					{
						*array[x] = *array[x - 1];
					}
					*array[t] = TempInput;
					idx++;
					return;
				}
				//if element before is larger than current input
				else if (t == idx - 1)
				{
					array[t + 1] = new X;
					*array[t + 1] = TempInput;
					idx++;
					return;
				}
			}
		}
	}
	//functon to print the entire array begining to end after addition and sorting. 
	void Print()
	{
		for (int j = 0; j < idx - 1; j++)
		{
			cout << *array[j] << " ";
		}
		cout << endl;
	}
	//function to remove a selected item from the list and re-sort it
	void RemoveItem()
	{
		for (int x = 0; x <= idx - 1; x++)
		{
			if (*array[x] <= *array[x + 1])
				cout << "Stll sorted, elment " << x << endl;
			else if (*array[x] = NULL)
				cout << "Empty spot" << endl;
			else
				cout << "Not sorted" << endl;
		}
	}
	//if the array is empty return true 
	bool IsEmpty()
	{
		if *array[0] = NULL;
		return true;
	}
	bool IsFull()
	{
		if(idx < MaxElm - 1)
			return true
		else 
			return false
	}
	void MakeEmpty()
	{
		for (int x = 0; x < MaxElm; x++)
		{
			if (*array[x] != NULL)
			{
				delete array[x];
				array[x] = NULL;
			}
		}
	}
};

template<class Y>
class T2Orderedlist
{
private:
	Y *array[MaxElm];
public:
	int idx = MaxElm - 1;
	//adds and sorts an item to the array of pointers from the back to front
	void AddItem(Y TempInput)
	{
		//sets first element to the begining of the array
		//seems to work as intended
		if (idx == MaxElm - 1)
		{
			array[MaxElm - 1] = new Y;
			*array[MaxElm - 1] = TempInput;
			idx--;
			return;
		}
		//idx++;
		//sort array
		else
		{
			array[idx] = new Y;
			*array[idx] = TempInput;
			for (int t = MaxElm - 1; t > 0; t--)
			{
				if (*array[t] > TempInput)
				{
					array[idx] = new Y;
					for (int x = idx; x > t; x--)
					{
						*array[x] = *array[x - 1];
					}
					*array[t] = TempInput;
					idx--;
					return;
				}
				//if element before is larger than current input
				else if (t == idx - 1)
				{
					array[t + 1] = new Y;
					*array[t + 1] = TempInput;
					idx--;
					return;
				}
			}
		}
	}
	//functon to print the entire array begining to end after addition and sorting. 
	void Print()
	{
		for (int j = MaxElm - 1; j > 0; j--)
		{
			cout << *array[j] << " ";
		}
		cout << endl;
	}
};

int main()
{
	orderedlist<int> L4;
	T2Orderedlist<int> L4T2;
	cout << "TASK 1 Sorted: " << endl;
	L4.AddItem(6);
	L4.AddItem(11);
	L4.AddItem(50);
	L4.AddItem(24);
	L4.AddItem(7);
	L4.AddItem(36);
	L4.AddItem(9);
	L4.AddItem(2);
	L4.AddItem(39);
	L4.AddItem(5);
	L4.AddItem(39);
	L4.AddItem(16);
	L4.AddItem(41);
	L4.AddItem(49);
	L4.AddItem(42);
	L4.AddItem(12);
	L4.AddItem(44);
	L4.AddItem(14);
	L4.AddItem(46);
	L4.AddItem(19);
	L4.Print();

	cout << "TASK 2 Sorted: " << endl;
	L4T2.AddItem(6);
	L4T2.AddItem(11);
	L4T2.AddItem(50);
	L4T2.AddItem(24);
	L4T2.AddItem(7);
	L4T2.AddItem(36);
	L4T2.AddItem(9);
	L4T2.AddItem(2);
	L4T2.AddItem(39);
	L4T2.AddItem(5);
	L4T2.AddItem(39);
	L4T2.AddItem(16);
	L4T2.AddItem(41);
	L4T2.AddItem(49);
	L4T2.AddItem(42);
	L4T2.AddItem(12);
	L4T2.AddItem(44);
	L4T2.AddItem(14);
	L4T2.AddItem(46);
	L4T2.AddItem(19);
	L4T2.Print();

	cin.get();
	return 0;
}