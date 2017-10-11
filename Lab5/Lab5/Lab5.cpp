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
	void Additem(X item)
	{
		node<X>* ptr, Location;
		Location = head;
		ptr->info = item;
		if (head == 0)
		{
			ptr->info = item;
			item->next = NULL;
			head = ptr;
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
	X GetItem(X item)
	{
		node<X>* ptr, Location;
		Location = head;
		ptr->info = item;
		if (head == 0)
		{
			ptr->info = item;
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
		node<X>* ptr, Location;
		Location = head;
		ptr->info = item;
		if (head == NULL)
			return false;
		while(Location->next != NULL && Location->next != ptr->info)
		{
			Location = Locaiton->next;
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
	X SeeNext()
	{
		node<X>* ptr, Location;
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
		node<X>* ptr, Location;
		Location = head;
		ptr->info = item;
		if (head == NULL)
		{
			cout << "Error empty list" << endl;
			return 0;
		}
		else if (*head == item)
			return *head;
		else
		{
			while ((Location->next)->info != item)
			{
				Location = Location->next;
				if ((Location->next)->info == item)
					return (Location->next)->info
				else
				{
					cout << "Error, element not found"
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
	float GPA;
public:
	student(string F_name, string L_name, int M_number, int B_year, float gpa = 0.0)
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
	float Getgpa() { return GPA; }
	int Getage() 
	{
		/*
		time_t currentTime = time(0);
		float currentYear = (currentTime / 60 / 60 / 24 / 365) + 1970;
		return currentYear - Byear;
		*/
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
};

int main()
{
	student Matt = student("Matthew", "Kavanagh", 123, 1997, 3.5);
	cout <<  Matt.GetName() << endl;
	cout << Matt.GetMnumber() << endl;
	cout << Matt.Getage() << endl;
	cout << Matt.Getgpa() << endl;
	OrderedLinkList<int> T1;
	//cout << endl << T1.IsEmpty() << endl;
	/*
	T1.Additem(1);
	T1.Additem(4);
	T1.Additem(7);
	T1.Additem(5);
	T1.IsInList(5);
	*/
	cin.get();
    return 0;
}

