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
	//initilizes the values to -9999
	//works well
	void listTo0()
	{
		idx = 0;
		for (int x = 0; x < MaxElm; x++)
		{
			array[x] = new X;
			*array[x] = 0;
		}
	}

	//adds and sorts an item to the array of pointers
	void AddItem(X TempInput)
	{
		int temp, FirstInput, change = 0;
		int Narray[MaxElm] = { 0 };
		Narray[idx] = TempInput;
		//cout << Narray[idx] << " ";
		//sets first element to the begining of the array
		//seems to work as intended
		/*
		if (idx == 0)
		{
			*array[0] = TempInput;
			idx++;
			//FirstInput = *array[0];
			return;
		}
		*/
		//prefill the array
		//*array[idx] = TempInput;
		//idx++;
		//sort array
		for (int t = 1; t < idx; t++)
		{
			//cout << "Array[t]: " << *array[t] << " " << "Array[t - 1]: " << " " << *array[t - 1] << endl;
			//if element before is larger than current input
			if (Narray[t] > Narray[t - 1])
			{
				temp = Narray[t];
				Narray[t] = TempInput;
				Narray[t - 1] = temp;
				idx++;
				return;
			}
			//if element before is larger than current input
			else
			{
				Narray[t - 1] = TempInput;
				idx++;
				//return;
			}
		}
		cout << Narray[idx] << " ";
	}
	//functon to print the entire array begining to end after addition and sorting. 
	void Print()
	{
		for (int j = 0; j < MaxElm - 1; j++)
		{
			cout << "Here";
			cout << Narray[j] << " ";
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
	L4.AddItem(10);
	L4.AddItem(7);
	//L4.Print();
	cin.get();
	return 0;
}
