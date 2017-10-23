/*------------------------------------------------------------------------------------------------------------------------------------------------
NOTE TO GRADER:
Compiled on Visual Studio 2017 on Windows 10
------------------------------------------------------------------------------------------------------------------------------------------------*/
#include "stdafx.h"
#include<array>
#include<iostream>
#include<string>
using namespace std;

template<class X>
class Stack
{
protected:
	int Size;
	X *array;
	int Top = 0;
public:
	Stack(int Passer)
	{
		Size = Passer; 
		array = new X[Size];	
	}
	//no return adds an element to the stack
	void push(X element)
	{
		if (Top <= Size)
		{
			//array[Top] = new X;
			array[Top] = element;
			Top++;
			return;
		}
		else
		{
			//Needs to throw exception
			cout << "Stack is full" << endl;
			Top++;
			return;
		}
	}
	//returns a pointer
	int pop()
	{
		//returns a pointer with an &
		//cout << &array[Top - 1] << endl;
		if (array[Top - 1] == NULL)
			return NULL;
		else
		{
			int popped = array[Top - 1];
			array[Top - 1] = NULL;
			//delete(&array[Top - 1]);
			Top--;
			return popped;
		}
	}
	//returns a pointer
	int* top()
	{
		int* Returner = &array[Top - 1];
		//return Returner;
		return Returner;
	}
	//returns an int of the length of the array based on the value of the int Top that is used too indicate where the 
	//top of the array is
	int length()
	{
		return Top;
	}
	//emptys the array and clears the memory
	void empty()
	{
		for (int x = 0; x < Size; x++)
		{
			if (array[x] == NULL)
				return;
			else
			{
				delete(&array[x]);
				array[x] = 0;
			}
			Top = 0;
		}
	}
	//friend class
	template<class U>
	friend void PrintArray(Stack<U> obj, int Size);
};

template<class NewType>
void PrintArray(Stack<NewType> obj, int Size) {

	for (int j = 0; j < Size; j++)
	{
		if (obj.array[j] <= 0)
			cout << " ";
		else
			cout << obj.array[j] << "    ";
	}
	cout << endl;
}

int main()
{
	int DiskNum, MoveF, MoveT;
	int TempI = 0;
	int* change, TempP;
	bool win = false;
	cout << "Enter the number of disk to play with: ";
	cin >> DiskNum;
	Stack<int> Peg1(DiskNum);
	Stack<int> Peg2(DiskNum);
	Stack<int> Peg3(DiskNum);
	for (int x = 1; x <= DiskNum; x++)
		Peg1.push(x);

	do
	{
		cout << "Tower 1: "; PrintArray(Peg1, DiskNum);
		cout << "Tower 2: "; PrintArray(Peg2, DiskNum);
		cout << "Tower 3: "; PrintArray(Peg3, DiskNum);
		cout << "Enter the tower to move from: ";
		cin >> MoveF;
		cout << "Enter the tower to move to: ";
		cin >> MoveT;
		//MoveF
		if (MoveF == 1)
		{
			TempI = Peg1.pop();
		}
		else if (MoveF == 2)
		{
			TempI = Peg2.pop();
		}
		else if (MoveF = 2)
		{
			TempI = Peg3.pop();
		}
		//MoveT
		if (MoveT == 1)
		{
			Peg1.push(TempI);
		}
		else if (MoveT == 2)
		{
			Peg2.push(TempI);
		}
		else if (MoveT == 3)
		{
			Peg3.push(TempI);
		}
	} while (true);


	cin.get();
	return 0;
}
