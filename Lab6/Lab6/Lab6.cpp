/*------------------------------------------------------------------------------------------------------------------------------------------------
NOTE TO GRADER:
Compiled on Visual Studio 2017 on Windows 10
------------------------------------------------------------------------------------------------------------------------------------------------*/
#include "stdafx.h"
#include<array>
#include<iostream>
using namespace std;
#define Size 3

template<class X>
class Stack
{
protected:
	X *array[Size] = { 0 };
	int idx = 0;
	int Top = 0;
public:
	void push(X element)
	{
		Top++;
		if (idx < Size)
		{
			array[idx] = new X;
			*array[idx] = element;
			idx++;
			Top++;
			return;
		}
		else
		{
			cout << "Stack is full" << endl;
			Top++;
			idx++;
			return;
		}
	}
	//Is this returning a pointer correctly?
	int* pop()
	{
		idx--;
		int* popped = array[idx];	
		idx++;
		return popped;
	}
	//Is this returning a pointer correctly?
	int* top()
	{
		idx--;
		int* Returner = array[idx];
		idx++;
		return Returner;
	}
	//This isn't good enough long term I think
	int length()
	{
		return Size;
	}
	void empty()
	{
		for (int x = 0; x < Size; x++)
		{
			free(array[x]);		
		}
	}
	//Ask if cout is ok for a print function 
	void print()
	{
		for (int j = 0; j < Size; j++)
		{
			cout << *array[j] << " ";
		}
		cout << endl;
	}
};

//Create a main program, a function, or a class?
int main()
{
	Stack<int> T1;
	int array[Size];
	T1.push(1);
	T1.push(2);
	T1.push(3);
	T1.print();
	cout << "Pop: " << T1.pop() << endl;
	cout << "Top: " << T1.top() << endl;
	cout << "Length: " << T1.length() << endl;
	T1.empty();
	cout << "List emptied: ";
	T1.print();
	cin.get();
    return 0;
}

