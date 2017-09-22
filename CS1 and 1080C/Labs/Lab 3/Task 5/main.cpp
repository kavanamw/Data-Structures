#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float N, z, x;
    cout << "Enter a value in the ranger of 2 to 20: ";
    cin >> N;
    for(z = 0; z <= N; z++)
    {
        for(x = N; x >= 0; x--)
        {
        cout << z * x << ",";
        }
        cout << '\b' << " " << endl;
    }
}
