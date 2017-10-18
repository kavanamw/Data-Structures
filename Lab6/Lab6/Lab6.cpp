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
	int Top = 0;
public:
	void push(X element)
	{
		if (Top < Size)
		{
			array[Top] = new X;
			*array[Top] = element;
			Top++;
			return;
		}
		else
		{
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
			//delete(array[Top - 1]);
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
	friend void PrintArray(Stack<U> obj);
};

template<class NewType>
void PrintArray(Stack<NewType> obj) {

	for (int j = 0; j < Size; j++)
	{
		cout << obj.array[j] << " ";
	}
	cout << endl;
}

class Game
{
public:
	void move(int Move, int Peg)
	{

	}
};

int main()
{
	///*Example inputs for testing
	Stack<int> T1;
	int array[Size];
	T1.push(1);
	T1.push(2);
	T1.push(3);
	PrintArray(T1);
	cout << "Length: " << T1.length() << endl;
	cout << "Pop: " << T1.pop() << endl;
	cout << "Pop2: " << T1.pop() << endl;
	cout << "Top: " << T1.top() << endl;
	cout << "Length: " << T1.length() << endl;
	PrintArray(T1);
	T1.empty();
	cout << "List emptied: " << endl;
	PrintArray(T1);
	cout << "Length: " << T1.length() << endl;
	cin.get();
	//*/

	Stack<int> Peg1;
	Stack<int> Peg2;
	Stack<int> Peg3;
	Game board3;
	int Disknum, Move, Peg;
	cout << "Enter the number of disk to play with: ";
	cin >> Disknum;
	cout << "Enter the game piece, by it's value, first then hit enter then type the peg too move it too" << endl;
	cin >> Move;
	cin >> Peg;
	board3.move(Move, Peg);

	cin.get();
	cin.get();
	return 0;
}
