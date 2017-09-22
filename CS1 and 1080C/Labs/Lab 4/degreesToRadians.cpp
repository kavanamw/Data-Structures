#include <iostream>
#include <math.h>
using namespace std;

double AngD = 0, AngR = 0;
double degreesToRadians(double AngD)
    {
        const double PI = atan(1.0)*4.0;
        AngR = AngD * PI/180;
        return AngR;
    }

//const double PI = atan(1.0)*4.0;  // PI is a global constant
int main()
{
    double x;
    //cout << "Degrees to Radians Test Driver" << endl;
    cout << "Enter angle in degrees: ";
    cin >> AngD;
    degreesToRadians(AngD);
    cout << "Angle in Radians: " << AngR;
    return 0;
}
