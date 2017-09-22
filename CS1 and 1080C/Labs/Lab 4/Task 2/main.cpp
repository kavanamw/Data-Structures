#include <iostream>
#include <math.h>
using namespace std;

double N = 0;
double factorial(double N)
{
    double Total = 1;
    for(int counter = 1;counter <= N;counter++)
    {
        Total = Total * counter;
        //cout << Total << "*" << counter << "=" << Total << endl;
        //cout << Total << endl;
    }
    return Total;
}

int main()
{
    cout << "Enter N: ";
    cin >> N;
    cout << "Factorial: " << factorial(N);
    return 0;
}
