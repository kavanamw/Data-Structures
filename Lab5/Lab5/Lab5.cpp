/*------------------------------------------------------------------------------------------------------------------------------------------------
NOTE TO GRADER:
I have been attending Wenesday's lab but I havn't seen an attendence sheet for a few weeks now so im sorry if their has been one and im just missing it
Compiled on Visual Studio 2017 on Windows 10
------------------------------------------------------------------------------------------------------------------------------------------------*/
#include<array>
#include "stdafx.h"
#include<string>
#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

template<typename N>
struct node {
	N info;
	node<N> *next;
};

template<class X>
class OrderedLinkList
{
private:
	node<X>* head;
	int nextitem;
public:
	OrderedLinkList() 
	{
		node<X>* head = NULL;
		int NextItem = 0;
	}
	void Additem(X *item)
	{
		node<X>* ptr, *Location;
		Location = head;
		ptr = new node<X>;
		ptr->info = *item;
		if (head == 0)
		{
			ptr->info = *item;
			ptr->next = NULL;
			head = ptr;
			cout << *item << " ";
			return;
		}
		else
		{
			Location = head;
			while (Location->next != NULL)
			{
				Location = Location->next;
			}
			ptr->next = 0;
			Location->next = ptr;
		}
		cout << *item << " ";
	}
	X* GetItem(int Mnumber)
	{
		//needs too use student stuff i guess
		node<X>* ptr, *Location;
		Location = head;
		ptr = new node<X>;
		//ptr->info = item;
		ptr->info = Mnumber;
		if (head == 0)
		{
			//ptr->info = item;
			ptr->info = Mnumber;
			item->next = NULL;
			head = ptr;
			return false;
		}
		else
		{
			Location = head;
			while (Location->next != NULL && (Location->next)->info < ptr->info)
			{
				Location = Location->next;
			}
			pre->next = Location->next;
			Location->next = ptr;
		}
	}
	bool IsInList(X item)
	{
		node<X>* ptr, *Location;
		Location = head;
		ptr = new node<X>;
		ptr->info = item;
		if (head == NULL)
			return false;
		while(Location->next != NULL && (Location->next)->info != ptr->info)
		{
			Location = Location->next;
			if (Location->next = NULL)
				return false;
			else
				return true;
		}		
	}
	bool IsEmpty()
	{
		node<X>* Location;
		Location = head;
		if (head == NULL)
			return true;
		else
			return false;
	}
	int Size()
	{
		node<X>* Location;
		Location = head;
		int counter = 0;
		if (head == NULL)
			return counter;
		else
		{
			while (Location->next != NULL)
			{
				Location = Location->next;
				counter++;
			}
		}
		return counter;
	}
	X* SeeNext()
	{
		node<X>* ptr, *Location;
		Location = head;
		ptr->info = item;
		if (head == NULL)
		{
			cout << "Error, empty list" << endl;
			return 0;
		}
		else
		{
			return Location->next;
		}
	}
	X SeeAt(int item)
	{
		node<X>* ptr, *Location;
		Location = head;
		ptr = new node<X>;
		ptr->info = item;
		if (head == NULL)
		{
			cout << "Error empty list" << endl;
			return 0;
		}
		else if (head->info == item)
			return head->info;
		else
		{
			while ((Location->next)->info != item)
			{
				Location = Location->next;
				if ((Location->next)->info == item)
					return (Location->next)->info;
				else
				{
					cout << "Error, element not found" << endl;
					return 0;
				}
			}
		}
	}
	void reset()
	{
		node<X>* Location;
		Location = head;
	}
};

class student
{
private:
	string Fname, Lname;
	int Byear, Mnumber;
	double GPA;
public:
	student(string F_name, string L_name, int M_number, int B_year, double gpa = 0.0)
	{
		Fname = F_name;
		Lname = L_name;
		Mnumber = M_number;
		Byear = B_year;
		GPA = gpa;
	};
	string GetName() 
	{ 
		string FullName = Fname + " " + Lname;
		return FullName;
	}
	int GetMnumber() { return Mnumber; }
	double Getgpa() { return GPA; }
	int Getage() 
	{
		return 2017 - Byear;
	}
	bool operator == (const student& temp) {
		if (this->Mnumber == temp.Mnumber)
			return 1;
		else
			return 0;
	}
	bool operator > (const student& temp) {
		if (this->Mnumber == temp.Mnumber)
			return 1;
		else
			return 0;
	}
	bool operator < (const student& temp) {
		if (this->Mnumber == temp.Mnumber)
			return 1;
		else
			return 0;
	}
	//Something to work on
	bool operator == (int num)
	{

	}
	void art(string F_name, string L_name, int M_number, int B_year, double gpa)
	{
		cout << "-------------------------------------" << endl;
		cout << "- First Name: " << Fname << endl;
		cout << "- Last Name: " << Lname << endl;
		cout << "- Mnumber: " << Mnumber << endl;
		cout << "- Birth Year: " << Byear << endl;
		cout << "- GPA: " << gpa << endl;
		cout << "-------------------------------------";
	}
};

int main()
{
	char loop;
	//Creating the ordered linked list
	OrderedLinkList<int> T1;
	cout << "Original list: " << endl;
	int *Num1 = new int; *Num1 = 4;
	int *Num2 = new int; *Num2 = 3;
	int *Num3 = new int; *Num3 = 2;
	int *Num4 = new int; *Num4 = 1;
	do
	{
		//Menu for user selection 
		int input, Mnum, search, Byear = 0;
		double GPA = 0.0;
		string Fname, Lname;

		cout << "1. AddItem" << endl;
		cout << "2. GetItem" << endl;
		cout << "3. IsInList" << endl;
		cout << "4. IsEmpty" << endl;
		cout << "5. Size" << endl;
		cout << "6. SeeNext" << endl;
		cout << "7. SeeAt" << endl;
		cout << "8. Reset" << endl;
		cout << "9. ASCII art" << endl;
		cout << "Enter the number of the function to run: ";
		cin >> input;
		switch (input)
		{
			case 1:
			{
				//should be done
				cout << "Enter the First name of the student: ";
				cin >> Fname;
				cout << "Enter the Last name of the student: ";
				cin >> Lname;
				cout << "Enter the Mnumber of the student: ";
				cin >> Mnum;
				cout << "Enter the birthyear of the student: ";
				cin >> Byear;
				cout << "optionally enter a GPA, enter 0 if you do not want to enter a GPA: ";
				cin >> GPA;
				cout << "Student class outputs for proff that works" << endl;
				student Students = student(Fname, Lname, Mnum, Byear, GPA);
				cout << Students.GetName() << endl;
				cout << Students.GetMnumber() << endl;
				cout << Students.Getage() << endl;
				cout << Students.Getgpa() << endl;
				break;
			}
			case 2:
			{
				cout << "Enter the M number without the M: ";
				cin >> Mnum;
				//cout << "Getitem, is the entered Mnumber in the list? " << T1.GetItem(Mnum);
				break;
			}
			case 3:
			{
				//Might work, not sure
				cout << "Enter the item to see if it's in the list: ";
				cin >> search;
				cout << endl << "Is the entered item in the list? 1 for yes, 0 for no:    " << T1.IsInList(search) << endl;
				break;
			}
			case 4:
			{
				//Does not work
				cout << "Is the list empty? 1 for yes, 0 for no:   " << T1.IsEmpty() << endl;
				break;
			}
			case 5:
			{
				cout << endl << "Size of list: " << T1.Size() << endl;
				break;
			}
			case 6:
			{
				//cout << "See next: " << T1.SeeNext() << endl;
				break;
			}
			case 7:
			{
				cout << "See at: " << T1.SeeAt(2) << endl;
				break;
			}
			case 8:
			{
				T1.reset();
				break;
			}
			case 9:
			{
				cout << "Enter the First name of the student: ";
				cin >> Fname;
				cout << "Enter the Last name of the student: ";
				cin >> Lname;
				cout << "Enter the Mnumber of the student: ";
				cin >> Mnum;
				cout << "Enter the birthyear of the student: ";
				cin >> Byear;
				cout << "optionally enter a GPA, enter 0 if you do not want to enter a GPA: ";
				cin >> GPA;
				student Students = student(Fname, Lname, Mnum, Byear, GPA);
				Students.art(Fname, Lname, Mnum, Byear, GPA);
				break;
			}
		}
		cout << endl << "Run another function? 'y' for yes, 'n' for no ";
		cin >> loop;
	} while (loop == 'y');
	cin.get();
    return 0;
}

