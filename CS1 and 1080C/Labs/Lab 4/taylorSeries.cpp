#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

//Degrees to Radians
double AngD, AngR;
double degreesToRadians(double AngD)
{
		const double PI = atan(1.0)*4.0;
		AngR = AngD * PI/180;
		return AngR;
}

//Factorial
//double f = 0;
double factorial(double f)
{
    double Total = 1;
    for(int counter = 1;counter <= f;counter++)
    {
        Total = Total * counter;
    }
    return Total;
}

//mySine()
double mySine(double AngR)
{
    double Sin = 0.0;
    for(int k = 0; k < 9; k++)
    {
        double Top, Bottom;
        Top = pow(-1, k) * pow(AngR, 2 * k + 1);
        Bottom = factorial(2 * k + 1);
        Sin = Sin + Top / Bottom;
    }
    return Sin;
}

double myCosine(double AngR)
{
    double SumP = 0.0;
    double SumN = 0.0;
    double Total = 0.0;
    for(int k = 4; k <= 100; k+= 4)
    {
        SumP = SumP + (pow(AngR,k) / factorial(k));
    }
    for(int k = 2; k  <= 100; k += 4)
    {
        SumN = SumN + (pow(AngR,k) / factorial(k));
    }
    Total = (1 - (SumN) + (SumP));
    return Total;
}

double myTangent(double AngR)
{
    double Tan;
    Tan = mySine(AngR) / myCosine(AngR);
    return Tan;
}

//chart

//main
int main()
{
    /*
    cout << "Enter the angle in Radians: ";
    cin >> AngR;

    double Sin = mySine(AngR);
    cout << "Sine value: " << Sin << endl;

    double Cos = myCosine(AngR);
    cout << "Cosine value: " << Cos << endl;

    double Tang = myTangent(AngR);
    cout << "Tangent value: " << Tang << endl;
    return 0;
    */
    //chart
    cout << "          " << "System" << "     " << "System" << "     " << "System" << endl;
    cout << "Degrees" << "  " << "Radians" << "  " << "Sin" << "     " << "Sin" << "     " << "Cos" << "  " << "Cos" << "  " << "Tan" << "  " << "Tan" << endl;
    double Rad, SysSin, SysCos, SysTan, FunSin, FunCos, FunTan;
    for(int i = 0; i <= 360; i+=15)
    {
        Rad = degreesToRadians(i);

        SysSin = sin(Rad);
        SysCos = cos(Rad);
        SysTan = tan(Rad);

        FunSin = mySine(Rad);
        FunCos = myCosine(Rad);
        FunTan = myTangent(Rad);
        cout << i << "    " << Rad << "     " << SysSin << "     "<< FunSin << "     " << SysCos << "     " << FunCos << "     " << SysTan << "     " << FunTan <<endl;
        //cout << i << setw(15) << Rad << setw(15) << SysSin << setw(15) << FunSin << setw(15) << SysCos << setw(15) << FunCos << setw(15) << SysTan << setw(15) << FunTan;
    }
}
