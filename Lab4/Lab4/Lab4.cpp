#include "stdafx.h"
#include<iostream>
#include<array>
using namespace std;
#define MaxElm 5

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
		int temp, FirstInput, change = 0;
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
	}
	//function to remove a selected item from the list and re-sort it
	void RemoveItem()
	{

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

int main()
{
	orderedlist<int> L4;
	L4.AddItem(4);
	L4.AddItem(3);
	L4.AddItem(2);
	L4.AddItem(1);
	L4.AddItem(7);
	L4.Print();
	cin.get();
	return 0;
}