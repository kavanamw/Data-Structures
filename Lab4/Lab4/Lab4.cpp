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
	int idx;
public:
	//initilizes the values to -9999
	//works well
	void listTo0()
	{
		idx = 0;
		for (int x = 0; x < MaxElm; x++)
		{
			array[x] = new X;
			*array[x] = -9999;
		}
	}

	//adds and sorts an item to the array of pointers
	void AddItem(X TempInput)
	{
		int temp, FirstInput = 0;
		//sets first element to the begining of the array
		//seems to work as intended
		if (idx == 0)
		{
			*array[0] = TempInput;
			idx++;
			FirstInput = *array[0];
			return;
		}
		//sort array
		for (int t = 1; t < MaxElm; t++)
		{
			//if element before is larger than current input
			if (*array[t] > TempInput)
			{
				///*
				temp = *array[t];
				*array[t] = TempInput;
				*array[t + 1] = temp;
				idx++;
				return;
				//*/
			}
			//if element before is larger than current input
			else
			{
				///*
				*array[t + 1] = TempInput;
				idx++;
				return;
				//*/
			}
		}
	}
	//the first element gets overwritten in the AddItem function so here I readd it in the correct spot
	void SortFirst()
	{
		for (int x = 0; x > idx; x++)
		{
			if (*array[x] < FirstInput)
				*array[x + 1] = FirstInput;
		}
	}
	//functon to print the entire array begining to end after addition and sorting. 
	void Print()
	{
		for (int j = 0; j < MaxElm; j++)
		{
			//cout << "Here" << endl;
			cout << *array[j] << endl;
		}
	}
	//function to remove a selected item from the list and re-sort it
	void RemoveItem()
	{

	}
	//if the array is empty return true 
	bool IsEmpty()
	{
		for (int x = 0; x < MaxElm; x++)
		{
			if (*array[x].empty() ? )
				return true
			else
				return false
		}
	}

	/*
	bool IsFull()
	{

	}
	void MakeEmpty()
	{

	}
	*/
};

int main()
{
	orderedlist<int> L4;
	L4.listTo0();
	L4.AddItem(18);
	L4.AddItem(1);
	L4.AddItem(2);
	/*
	L4.AddItem(10);
	L4.AddItem(7);
	L4.AddItem(9);
	*/	
	L4.Print();
	cin.get();
	return 0;
}

