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
			//throw exception
			cout << "Stack is full" << endl;
			Top++;
			return;
		}
	}

	int* pop()
	{
		if (array[Top - 1] == NULL)
			return NULL;
		else
		{
			int* popped = array[Top - 1];
			array[Top - 1] = NULL;
			delete(array[Top - 1]);
			Top--;
			return popped;
		}
	}

	int* top()
	{
		int* Returner = array[Top - 1];
		return Returner;
	}

	int length()
	{
		return Top;
	}
	void empty()
	{
		for (int x = 0; x < Size; x++)
		{
			if (array[x] == NULL)
				return;
			else
			{
				delete(array[x]);
				array[x] = 0;
			}
			Top = 0;
		}
	}
	template<class U>
	friend void PrintArray(Stack<U> obj, int Size);
};

template<class NewType>
void PrintArray(Stack<NewType> obj, int Size) {

	for (int j = 0; j < Size; j++)
	{
		cout << obj.array[j] << "    ";
	}
	cout << endl;
}

int main()
{
	int DiskNum, move;
	int* change;
	bool win = false;
	cout << "Enter the number of disk to play with: ";
	cin >> DiskNum;
	Stack<int> Peg1(DiskNum);
	Stack<int> Peg2(DiskNum);
	Stack<int> Peg3(DiskNum);
	for (int x = 1; x <= DiskNum; x++)
		Peg1.push(x);
	//do
	//{
		cout << "Tower 1: "; PrintArray(Peg1, DiskNum);
		cout << "Tower 2: "; PrintArray(Peg2, DiskNum);
		cout << "Tower 3: "; PrintArray(Peg3, DiskNum);
		cout << "Enter the tower to move to: ";
		cin >> move;
		
	//} while (win = true);//conditions for winning the game

	cin.get();
	cin.get();
	return 0;
}
