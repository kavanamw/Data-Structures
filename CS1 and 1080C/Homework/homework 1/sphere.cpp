#include <iostream>

using namespace std;

int main()
{
double Area, Volume, Rad;
//program too find the surface area, volume, of a sphere
//input will be the radius

cout << "What is the radius of the sphere?:";
cin >> Rad;
    Area = (4*3.1415)*(Rad*Rad);
cout << "Surface Area: " << Area << endl;
    Volume = (4*3.1415*(Rad*Rad*Rad))/3;
cout << "Volume: " << Volume;

return 0;
}
