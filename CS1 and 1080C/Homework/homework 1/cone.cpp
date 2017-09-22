#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double Area, Volume, Rad, H;
//program too find the surface area, volume, of a sphere
//input will be the radius

cout << "What is the Radius?:";
cin >> Rad;
cout << "What is the Height?:";
cin >> H;
    Area = 3.1415*Rad*(Rad+sqrt(H*H+Rad*Rad));
cout << "Surface Area: " << Area << endl;
    Volume = (3.1415*(Rad*Rad)*H)/3;
cout << "Volume: " << Volume;

return 0;
}

