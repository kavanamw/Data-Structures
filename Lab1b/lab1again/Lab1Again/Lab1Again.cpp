// Lab1Again.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/* This program allows the user to enter and work with fractions. */
#include<iostream>
#include<math.h>
using namespace std;

void ReadFraction(int & Num, int & Denom, int & Num2, int & Denom2, int & Num3, int & Denom3, int & Num4, int & Denom4)
/* This function will allow the user to enter two fraction. */
{
	std::cout << "Enter the numerator for the first fraction: ";
	cin >> Num;
	while (Num < 0)
	{
		cout << "Enter only postive integers...reseting" << endl;
		cout << "Enter the numerator for the first fraction: ";
		cin >> Num;
	}
	cout << "Enter the denominator for the first fraction: ";
	cin >> Denom;
	while (Denom < 0 || Denom == 0)
	{
		cout << "Enter only postive nonzero integers...reseting" << endl;
		cout << "Enter the denominator for the first fraction: ";
		Denom = 0;
		cin >> Denom;
	}
	cout << endl;
	cout << "Enter the numerator for the second fraction: ";
	cin >> Num2;
	while (Num2 < 0)
	{
		cout << "Enter only postive integers...reseting" << endl;
		cout << "Enter the numerator for the second fraction: ";
		Num2 = 0;
		cin >> Num2;
	}
	cout << "Enter the denominator for the second fraction: ";
	cin >> Denom2;
	while (Denom2 < 0 || Denom2 == 0)
	{
		cout << "Enter only postive nonzero integers...reseting" << endl;
		cout << "Enter the denominator for the second fraction: ";
		Denom2 = 0;
		cin >> Denom2;
	}
	cout << endl;
	cout << "Enter the numerator for the third fraction: ";
	cin >> Num3;
	while (Num3 < 0)
	{
		cout << "Enter only postive integers...reseting" << endl;
		cout << "Enter the numerator for the first fraction: ";
		Num3 = 0;
		cin >> Num3;
	}
	cout << "Enter the denominator for the first fraction: ";
	cin >> Denom3;
	while (Denom3 < 0)
	{
		cout << "Enter only postive integers...reseting" << endl;
		cout << "Enter the numerator for the first fraction: ";
		Denom3 = 0;
		cin >> Denom3;
	}
	cout << endl;
	cout << "Enter the numerator for the fourth fraction: ";
	cin >> Num4;
	while (Num4 < 0)
	{
		cout << "Enter only postive integers...reseting" << endl;
		cout << "Enter the numerator for the first fraction: ";
		Num4 = 0;
		cin >> Num4;
	}
	cout << "Enter the denominator for the fourth fraction: ";
	cin >> Denom4;
	while (Denom4 < 0)
	{
		cout << "Enter only postive integers...reseting" << endl;
		cout << "Enter the numerator for the first fraction: ";
		Denom4 = 0;
		cin >> Denom4;
	}
	cout << endl;
}
//-------------------------------------------------------------------
int GCD = 0;
int gcd(int & Num, int & Denom)
{
	if (Num == 0)
	{
		GCD = Denom;
	}
	//cout << GCD << endl;
	else if (Denom == 0)
	{
		GCD = Num;
	}
	else
	{
		int Q = Num / Denom;
		int R = Num % Denom;
		//cout << R << endl;
		gcd(Denom, R);
	}
	return GCD;
}

void reduce1(int & Num, int & Denom)
{
	gcd(Num, Denom);
	if (Denom / GCD == 1)
	{
		cout << Num << "/" << Denom << " is reduced to " << Num / GCD << endl;
	}
	else
	{
		cout << Num << "/" << Denom << " is reduced to " << Num / GCD << "/" << Denom / GCD << endl;
	}
}

int factor(int & Num, int & Denom)
{
	gcd(Num, Denom);
	int Factor, changer = 0;
	Factor = Num / Denom;
	if (Factor == 1)
	{
		Num = Num - Denom;
	}
	return Factor;
}

void reduce2(int & Num, int & Denom)
{
	gcd(Num, Denom);
	int Factor, changer = 0;
	Factor = Num / Denom;
	if (Factor == 1)
	{
		Num = Num - Denom;
	}
	//cout << Factor << endl;
	if (Factor == 0 || Factor*(Denom / GCD) < 0 || Factor - (Num / GCD) < 0)
	{
		changer = -1;
	}
	else
	{
		changer = 1;
	}
	if (Denom / GCD == 1)
	{
		cout << Num << "/" << Denom << " is reduced to " << Factor << " and " << changer*(Factor - (Num / GCD)) << endl;
	}
	else
	{
		cout << Num << "/" << Denom << " is reduced to " << Factor << " and " << changer*(Factor*(Denom / GCD) - (Num / GCD)) << "/" << (Denom / GCD) << endl;
	}
}

void addfractions(int & Num, int & Denom, int & Num2, int & Denom2)c
{
	//still have the reduce2 issue from before, I think this is all thats left to do
	int NumF, DenomF, Top, Bot = 0;
	Top = Num * Denom2 + Num2 * Denom;
	Bot = Denom * Denom2;
	cout << "Sum of " << Num << "/" << Denom << " and " << Num2 << "/" << Denom2 << " is " << Top << "/" << Bot << endl;
	cout << Top << "/" << Bot << " reduced by reduce1 is " << Top / gcd(Top, Bot) << "/" << Bot / gcd(Top, Bot) << endl;
	//cout << Top << "/" << Bot << " reduced by reduce 2 is " << factor(Top, Bot) << " and " << Factor - (Top / gcd(Top, Bot)) << "/" << factor()Bot / gcd(Top, Bot) << endl;
}

void IsGreater(int & Num, int & Denom, int & Num2, int & Denom2)
{
	if ((Num / Denom) < (Num2 / Denom2))
		cout << Num << "/" << Denom << " is less than " << Num2 << "/" << Denom2 << endl;
	//return true;
	else if ((Num / Denom) > (Num2 / Denom2))
		cout << Num << "/" << Denom << " is greater than " << Num2 << "/" << Denom2 << endl;
	//return false;
	else
		cout << "Can't tell which is greater" << endl;
}

void FracPower(int & Num, int & Denom, int & Num2, int & Denom2, int & Num3, int & Denom3, int & Num4, int & Denom4)
{
	int Power1, Power2, Power3, Power4, Numf, Denomf, Num2f, Denom2f, Num3f, Denom3f, Num4f, Denom4f = 0;

	cout << "Enter the power to raise fraction one to: ";
	cin >> Power1;
	Numf = pow(Num, Power1);
	Denomf = pow(Denom, Power1);
	cout << Num << "/" << Denom << " raised to power " << Power1 << " is " << Numf << "/" << Denomf << endl;

	cout << "Enter the power to raise fraction two to: ";
	cin >> Power2;
	Num2f = pow(Num2, Power2);
	Denom2f = pow(Denom2, Power2);
	cout << Num2 << "/" << Denom2 << " raised to power " << Power2 << " is " << Num2f << "/" << Denom2f << endl;

	cout << "Enter the power to raise fraction three to: ";
	cin >> Power3;
	Num3f = pow(Num3, Power3);
	Denom3f = pow(Denom3, Power3);
	cout << Num3 << "/" << Denom3 << " raised to power " << Power3 << " is " << Num3f << "/" << Denom3f << endl;

	cout << "Enter the power to raise fraction four to: ";
	cin >> Power4;
	Num4f = pow(Num4, Power4);
	Denom4f = pow(Denom4, Power4);
	cout << Num4 << "/" << Denom4 << " raised to power " << Power4 << " is " << Num4f << "/" << Denom4f << endl;
}

void Reduce(int & Num, int & Denom, int & Num2, int & Denom2)
/* This function is called after ReadFraction(). This function will
reduce the two fractions.
Pre: Two Fractions
Post: Two reduced fractions */
{
	int a, b, c, d, i, j = 0;
	a = Denom;
	b = Num;
	c = Denom2;
	d = Num2;

	for (i = a * b; i > 1; i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			a /= i;
			b /= i;
		}
	}

	for (j = 50; j > 1; j--)
	{
		if ((c % j == 0) && (d % j == 0))
		{
			c /= j;
			d /= j;
		}
	}

	Denom = a;
	Num = b;
	Denom2 = c;
	Num2 = d;
}
//-------------------------------------------------------------------

void Reduce(int & Num, int & Denom)
/* This function is called from AddFraction(). The fraction added in
AddFraction() is reduced here.
Pre: One fraction added from two
Post: A reduced fraction  */
{
	int a = 0;
	int b = 0;
	int i = 0;

	a = Denom;
	b = Num;

	for (i = 50; i > 1; i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			a /= i;
			b /= i;
		}
	}

	Denom = a;
	Num = b;
}
//-------------------------------------------------------------------

void AddFraction(int &Num, int &Denom, int &Num2, int &Denom2)
/* This function is called after Reduce. This function adds the two
fractions Reduce() reduced
Pre: Two Fractions
Post: One reduced fraction  */
{
	if (Denom != Denom2)
	{
		Num = Num * Denom2;
		Num2 = Num2 * Denom;
		Denom = Denom * Denom2;
		Denom2 = Denom2 * Denom;
		Num = Num + Num2;
	}
	else
	{
		Num = Num + Num2;
	}

	Reduce(Num, Denom);
}
//-------------------------------------------------------------------

void DisplayFraction(int & Num, int & Denom)

/* This function displays the reduced and added fraction. This
function is called after AddFraction()
Post: Prints fraction */
{
	cout << "The reduced and added fraction is " << Num << "/" << Denom << endl;
}
//-------------------------------------------------------------------

int main()
{
	char an;
	do
	{
		int Num, Denom, Num2, Denom2, Num3, Denom3, Num4, Denom4 = 0;
		ReadFraction(Num, Denom, Num2, Denom2, Num3, Denom3, Num4, Denom4);

		cout << "REDUCE 1" << endl;
		reduce1(Num, Denom);
		reduce1(Num2, Denom2);
		reduce1(Num3, Denom3);
		reduce1(Num4, Denom4);
		cout << endl;

		cout << "REDUCE 2" << endl;
		reduce2(Num, Denom);
		reduce2(Num2, Denom2);
		reduce2(Num3, Denom3);
		reduce2(Num4, Denom4);
		cout << endl;

		cout << "ADD FRACTIONS" << endl;
		addfractions(Num, Denom, Num2, Denom2);
		addfractions(Num3, Denom3, Num4, Denom4);
		cout << endl;

		cout << "IS GREATER" << endl;
		IsGreater(Num, Denom, Num2, Denom2);
		IsGreater(Num3, Denom3, Num4, Denom4);
		cout << endl;

		cout << "FRAC POWER" << endl;
		FracPower(Num, Denom, Num2, Denom2, Num3, Denom3, Num4, Denom4);
		cout << endl;

		Reduce(Num, Denom, Num2, Denom2);
		Reduce(Num3, Denom3, Num4, Denom4);
		AddFraction(Num, Denom, Num2, Denom2);
		AddFraction(Num3, Denom3, Num4, Denom4);
		DisplayFraction(Num, Denom);
		DisplayFraction(Num3, Denom3);
		cout << endl;
		cout << "Would you like to do another fraction? ";
		cin >> an;
		cout << endl;
	} while ((an == 'y') || (an == 'Y'));

	return(0);
}

