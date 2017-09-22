#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void PrimeFactor(double Num)
{
    cout << Num << endl;
    while(fmod(Num, 2) == 0)
    {
        printf("%d ", 2);
        cout << "Here";
        Num = Num/2;
    }

    for(double i = 3.0;i <= sqrt(Num);i+=2)
    {
        while(fmod(Num, i) == 0)
        {
            printf("%d ", i);
            Num = Num/i;
        }
    }
    if(Num > 2)
    {
        printf("%d ", Num);
    }
}


int main()
{
    double Num = 600851475143;
    PrimeFactor(Num);
    return 0;
}
