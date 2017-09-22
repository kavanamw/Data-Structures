/* This program allows the user to enter and work with fractions. */
#include<iostream>
#include<math.h>
using namespace std;

void ReadFraction(int & Num, int & Denom, int & Num2, int & Denom2, int & Num3, int & Denom3, int & Num4, int & Denom4)
/* This function will allow the user to enter two fraction. */
{
        cout << "Enter the numerator for the first fraction: ";
        cin >> Num;
            while(Num < 0)
            {
                cout << "Enter only postive integers...reseting" << endl;
                cout << "Enter the numerator for the first fraction: ";
                cin >> Num;
            }
        cout << "Enter the denominator for the first fraction: ";
        cin >> Denom;
            while(Denom < 0 || Denom == 0)
            {
                cout << "Enter only postive nonzero integers...reseting" << endl;
                cout << "Enter the denominator for the first fraction: ";
                Denom = 0;
                cin >> Denom;
            }
        cout << endl;
        cout << "Enter the numerator for the second fraction: ";
        cin >> Num2;
            while(Num2 < 0)
            {
                cout << "Enter only postive integers...reseting" << endl;
                cout << "Enter the numerator for the second fraction: ";
                Num2 = 0;
                cin >> Num2;
            }
        cout << "Enter the denominator for the second fraction: ";
        cin >> Denom2;
            while(Denom2 < 0 || Denom2 == 0)
            {
                cout << "Enter only postive nonzero integers...reseting" << endl;
                cout << "Enter the denominator for the second fraction: ";
                Denom2 = 0;
                cin >> Denom2;
            }
        cout << endl;
        cout << "Enter the numerator for the third fraction: ";
        cin >> Num3;
            while(Num3 < 0)
            {
                cout << "Enter only postive integers...reseting" << endl;
                cout << "Enter the numerator for the first fraction: ";
                Num3 = 0;
                cin >> Num3;
            }
        cout << "Enter the denominator for the first fraction: ";
        cin >> Denom3;
            while(Denom3 < 0)
            {
                cout << "Enter only postive integers...reseting" << endl;
                cout << "Enter the numerator for the first fraction: ";
                Denom3 = 0;
                cin >> Denom3;
            }
        cout << endl;
        cout << "Enter the numerator for the fourth fraction: ";
        cin >> Num4;
            while(Num4 < 0)
            {
                cout << "Enter only postive integers...reseting" << endl;
                cout << "Enter the numerator for the first fraction: ";
                Num4 = 0;
                cin >> Num4;
            }
        cout << "Enter the denominator for the fourth fraction: ";
        cin >> Denom4;
            while(Denom4 < 0)
            {
                cout << "Enter only postive integers...reseting" << endl;
                cout << "Enter the numerator for the first fraction: ";
                Denom4 = 0;
                cin >> Denom4;
            }
        cout << endl;
}
//-------------------------------------------------------------------

void Input_Fractions(int & N1, int & D1, int & N2, int & D2, int & N3, int & D3, int & N4, int & D4)
{
    int Fract1 = N1/D1;
    int Fract2 = N2/D2;
    int Fract3 = N3/D3;
    int Fract4 = N4/D4;
}

int GCD = 0;
int reduce1(int & Num, int & Denom)
{
    //cout << "Num " << Num << endl;
    //cout << "Denom " << Denom << endl;
    if(Num == 0)
    {
        GCD = Denom;
    }

    else if(Denom == 0)
    {
        GCD = Num;
    }
    else
    {
        int Q = Num / Denom;
        int R = Num % Denom;
        //cout << R << endl;
        reduce1(Denom, R);
    }
    //cout << GCD << endl;
    return GCD;
}

int GCD2 = 0;
int reduce1b(int & Num2, int & Denom2)
{
    if(Num2 == 0)
    {
        GCD2 = Denom2;
    }

    else if(Denom2 == 0)
    {
        GCD2 = Num2;
    }
    else
    {
        int Q2 = Num2 / Denom2;
        int R2 = Num2 % Denom2;
        //cout << R << endl;
        reduce1b(Denom2, R2);
    }
    //cout << GCD2 << endl;
    return GCD;
}

int GCD3 = 0;
int reduce1c(int & Num3, int & Denom3)
{
    if(Num3 == 0)
    {
        GCD3 = Denom3;
    }

    else if(Denom3 == 0)
    {
        GCD3 = Num3;
    }
    else
    {
        int Q3 = Num3 / Denom3;
        int R3 = Num3 % Denom3;
        //cout << R << endl;
        reduce1c(Denom3, R3);
    }
    //cout << GCD2 << endl;
    return GCD3;
}

int GCD4 = 0;
int reduce1d(int & Num4, int & Denom4)
{
    if(Num4 == 0)
    {
        GCD4 = Denom4;
    }

    else if(Denom4 == 0)
    {
        GCD4 = Num4;
    }
    else
    {
        int Q4 = Num4 / Denom4;
        int R4 = Num4 % Denom4;
        //cout << R << endl;
        reduce1d(Denom4, R4);
    }
    //cout << GCD2 << endl;
    return GCD4;
}

int Factor = 0;
int reduce2(int & Num, int & Denom)
{
    //bug outputting 4/3 not 1 and 1/3
    Factor = Num / Denom;
    if(Factor == 1)
    {
        Num = Num - Denom;
    }
    cout << Num << "/" << Denom << " is reduced to " << Factor << " and " << Num / GCD << "/" << Denom / GCD << endl;
    return Factor;
}

//problems
bool IsGreater(int & Num, int & Denom, int & Num2, int & Denom2, int & Num3, int & Denom3, int & Num4, int & Denom4)
{
    if((Num/Denom) < (Num2/Denom2))
        cout << Num << "/" << Denom << " is less than " << Num2 << "/" << Denom2 << endl;
        //return true;
    else if((Num/Denom) > (Num2/Denom2))
        cout << Num << "/" << Denom << " is greater than " << Num2 << "/" << Denom2 << endl;
        //return false;
    else
        cout << "Can't tell which is greater" << endl;

    if((Num3/Denom3) < (Num4/Denom4))
        cout << Num3 << "/" << Denom3 << " is less than " << Num4 << "/" << Denom4 << endl;
        //return true;
    else if((Num3/Denom3) > (Num4/Denom4))
        cout << Num3 << "/" << Denom3 << " is greater than " << Num4 << "/" << Denom4 << endl;
        //return false;
    else
        cout << "Can't tell which is greater" << endl;
}

int Power = 0;
int FractPower(int & Num, int & Denom, int & Num2, int & Denom2, int & Num3, int & Denom3, int & Num4, int & Denom4)
{
    double Fract1 = Num / Denom;
    double Fract2 = Num2 / Denom2;
    cout << "Enter number to raise fractions to: ";
    cin >> Power;
    int Numb = 0;
    int Denomb = 0;
    int Num2b = 0;
    int Denom2b = 0;

    int Num3b = 0;
    int Denom3b = 0;
    int Num4b = 0;
    int Denom4b = 0;

    Numb = pow(Num, Power);
    Denomb = pow(Denom, Power);
    Num2b = pow(Num2, Power);
    Denom2b = pow(Denom2, Power);

    Num3b = pow(Num3b, Power);
    Denom3b = pow(Denom3b, Power);
    Num4b = pow(Num4b, Power);
    Denom4b = pow(Denom4b, Power);
    cout << Num << "/" << Denom << " raised to power " << Power << " is " << Numb << "/" << Denomb << endl;
    cout << Num2 << "/" << Denom2 << " raised to power " << Power << " is " << Num2b << "/" << Denom2b << endl;
    cout << Num3 << "/" << Denom3 << " raised to power " << Power << " is " << Num3b << "/" << Denom3b << endl;
    cout << Num4 << "/" << Denom4 << " raised to power " << Power << " is " << Num4b << "/" << Denom4b << endl;
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

void addfractions(int & Num, int & Denom, int & Num2, int & Denom2)
{
    int PNum = Num;
    int PDenom = Denom;
    int PNum2 = Num2;
    int PDenom2 = Denom2;
    int R1Num = (Num/reduce1(Num, Denom));
    int R1Denom = (Denom/reduce1(Num, Denom));
    int R2Fact = reduce2(Num2, Denom2);

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
    cout << "Sum of " << PNum << "/" << PDenom << " and " << PNum2 << "/" << PDenom2 << " is " << Num << "/" << Denom << endl;
    cout << PNum << "/" << PDenom << " reduced by reduce1 is " << R1Num << "/" << R1Denom << endl;
    cout << PNum << "/" << PDenom << " reduced by reduce2 is " << R2Fact << " and " << R1Num << "/" << R1Denom << endl;
}
//-------------------------------------------------------------------

int main()
{
        char an;
        do
        {
                int Num, Denom, Num2, Denom2, Fract1, Fract2, Num3, Denom3, Num4, Denom4 = 0;
                ReadFraction(Num, Denom,Num2,Denom2,Num3,Denom3,Num4,Denom4);

                    reduce1(Num, Denom);
                    reduce1b(Num2, Denom2);
                    reduce1c(Num3, Denom3);
                    reduce1d(Num4, Denom4);
                    cout << endl;
                    cout << Num << "/" << Denom << " is reduced to " << Num / GCD << "/" << Denom / GCD << endl;
                    cout << Num2 << "/" << Denom2 << " is reduced to " << Num2 / GCD2 << "/" << Denom2 / GCD2 << endl;
                    cout << Num3 << "/" << Denom3 << " is reduced to " << Num3 / GCD3 << "/" << Denom3 / GCD3 << endl;
                    cout << Num4 << "/" << Denom4 << " is reduced to " << Num4 / GCD4 << "/" << Denom4 / GCD4 << endl;
                    cout << endl;
                    reduce2(Num, Denom);
                    reduce2(Num2, Denom2);
                    reduce2(Num3, Denom3);
                    reduce2(Num4, Denom4);
                    cout << endl;
                    Fract1 = Num / Denom;
                    Fract2 = Num2 / Denom2;
                    addfractions(Num, Denom, Num2, Denom2);
                    cout << endl;
                    IsGreater(Num, Denom, Num2, Denom2, Num3, Denom3, Num4, Denom4);
                    FractPower(Num, Denom, Num2, Denom2, Num3, Denom3, Num4, Denom4);
                    cout << endl;
                    //FractPower(Num3, Denom3, Num4, Denom4);
                    //note to self, do this above

                Input_Fractions(Num, Denom, Num2, Denom2, Num3, Denom3, Num4, Denom4);
                Reduce(Num, Denom, Num2, Denom2);
                AddFraction(Num, Denom, Num2, Denom2);
                DisplayFraction(Num, Denom);

                Reduce(Num3, Denom3, Num4, Denom4);
                AddFraction(Num3, Denom3, Num4, Denom4);
                //DisplayFraction(Num, Denom);

                cout << endl;
                cout <<"Would you like to do another fraction? ";
                cin >> an;
                cout << endl;
        } while ((an == 'y') || (an == 'Y'));

        return(0);
}
