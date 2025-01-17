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
	int Top, idx = 0;
public:
	Stack(int Passer)
	{
		Size = Passer; 
		array = new X[Size];
		for (int x = 0; x < Size; x++)
			array[x] = NULL;
	}
	//no return adds an element to the stack
	void push(X element)
	{
		if (Top <= Size)
		{
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
		//idx is perminant value of the index, Top is temporary, can be set to 0 if its empty
		idx = Top;
	}
	//returns a pointer
	int pop()
	{
		idx = Size;
		//returns a pointer with an &
		//cout << &array[Top - 1] << endl;
		if (array[idx - 1] == NULL)
			return NULL;
		else
		{
			int popped = array[idx - 1];
			array[idx - 1] = NULL;
			//delete(&array[Top - 1]);
			idx--;
			return popped;
		}
	}
	//returns a pointer
	int top()
	{
		int Returner = 0;
		if (array[Size - 1] <= 0)
		{
			Top = 0;
			Returner = array[Top - 2];
		}
		else
			Returner = array[Top - 1];
		return Returner;
	}
	//returns an int of the length of the array based on the value of the int Top that is used too indicate where the 
	//top of the array is
	int length()
	{
		return idx;
	}
	//emptys the array and clears the memory
	void empty()
	{
		for (int x = 0; x < 1; x++)
		{
			if (array[x] == NULL)
				return;
			else
			{
				delete(&array[x]);
			}
			Top = 0;
		}
	}
	//function to determine if the game is over and returns true of false if it is
	bool IsFull()
	{
		for (int x = 0; x < Size; x++)
		{
			if (Top == Size && array[x] != 0)
				return true;
			else
				return false;
		}
	}
	bool IsEmpty()
	{
		if (idx == 0)
		{
			return true;
		}
		else
		{
			return false;
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
			//Ampersand for the address
			cout << obj.array[j] << "      ";
	}
	cout << endl;
}

int main()
{
	int DiskNum, MoveF, MoveT;
	int TempI = 0;
	int* TempP;
	bool Win = false;
	cout << "Enter the number of disk to play with: ";
	cin >> DiskNum;
	Stack<int> Peg1(DiskNum);
	Stack<int> Peg2(DiskNum);
	Stack<int> Peg3(DiskNum);
	for (int x = 1; x <= DiskNum; x++)
		Peg1.push(x);

	Peg2.empty();
	Peg3.empty();

	do
	{
		cout << "Tower 1: "; PrintArray(Peg1, DiskNum);
		cout << "Tower 2: "; PrintArray(Peg2, DiskNum);
		cout << "Tower 3: "; PrintArray(Peg3, DiskNum);
		cout << "Enter the tower to move from: ";
		cin >> MoveF;
		cout << "Enter the tower to move to: ";
		cin >> MoveT;
		//cout << Peg1.top() << endl;
		//User selected tower too move from, returns a value but does not delete it
		if (MoveF == 1)
		{
			TempI = Peg1.top();
		}
		else if (MoveF == 2)
		{
			TempI = Peg2.top();
		}
		else if (MoveF == 3)
		{
			TempI = Peg3.top();
		}
		//Checks if the player wants too move a bigger size onto a smaller
		if (MoveT == 1)
		{
			if (TempI < Peg1.top())
			{
				//Peg2.IsEmpty();
				cout << "You cannot move here" << endl;
				continue;
			}
		}
		else if (MoveT == 2)
		{
			//cout << Peg2.top() << endl;
			if (TempI < Peg2.top())
			{
				//Peg2.IsEmpty();
				cout << "You cannot move here" << endl;
				continue;
			}
		}
		else if (MoveT == 3)
		{
			if (TempI < Peg3.top())
			{
				cout << "You cannot move here" << endl;
				continue;
			}
		}
		//User selected tower too move from and does delete the element
		if (MoveF == 1)
		{
			TempI = Peg1.pop();
		}
		else if (MoveF == 2)
		{
			TempI = Peg2.pop();
		}
		else if (MoveF == 3)
		{
			TempI = Peg3.pop();
		}
		//Pushes the element into a new peg based on the users input
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
		//Determines a win
		if (Win = Peg3.IsFull())
		{
			cout << "Tower 3: ";
			PrintArray(Peg3, DiskNum);
			cout << "You won!" << endl << "Hit enter too continue" << endl;
			cin.get();
		}
	} while (Win == false);

	cin.get();
	return 0;
}
