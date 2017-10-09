// Lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

template<class X>
class OrderedLinkList
{
private:
public: 
	
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
		time_t currentTime = time(0);		float currentYear = (currentTime / 60 / 60 / 24 / 365) + 1970;		return currentYear - Byear;
		*/
		return 2017 - Byear;
	}
};

int main()
{
	student Matt = student("Matthew", "Kavanagh", 123, 1997, 3.5);
	cout <<  Matt.GetName() << endl;
	cout << Matt.GetMnumber() << endl;
	cout << Matt.Getage() << endl;
	cout << Matt.Getgpa() << endl;
	cin.get();
    return 0;
}

