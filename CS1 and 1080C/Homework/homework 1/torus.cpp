#include <iostream>

using namespace std;

int main()
{
double Area, Volume, R, r;
//program too find the surface area, volume, of a sphere
//input will be the radius

cout << "What is the major radius?:";
cin >> r;
cout << "What is the minor radius?:";
cin >> R;
    Area = 4*(3.1415*3.1415)*R*r;
cout << "Surface Area: " << Area << endl;
    Volume = 2*(3.1415*3.1415)*R*(r*r);
cout << "Volume: " << Volume;

return 0;
}
