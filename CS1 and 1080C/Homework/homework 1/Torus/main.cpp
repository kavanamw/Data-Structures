#include <iostream>

using namespace std;

int main()
{
double Area, Volume, R, r;
//program too find the surface area, volume, of a sphere
//input will be the radius

cout << "What is the major radius?:";
cin >> R;
cout << "What is the minor radius?:";
cin >> r;
    Area = (3.14159265358*3.14159265358)*(R*R - r*r);
cout << "Surface Area: " << Area << endl;
    Volume = ((3.14159265358*3.14159265358)*(R*R - r*r)*(R - r))/4;
cout << "Volume: " << Volume;

return 0;
}
