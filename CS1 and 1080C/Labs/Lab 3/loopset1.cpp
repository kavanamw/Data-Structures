#include <iostream>

using namespace std;

int main()
{
//loops 1A and 1B

    int Numbers = 1;
    for(;Numbers <= 101; Numbers++){
        if(Numbers % 2 == 0)
        cout << Numbers << endl;
    }

    Numbers = 1;
    while(Numbers <= 101)
    {
        if(Numbers % 2 == 0)
        cout << Numbers << endl;

       Numbers++;
    }

//loops 2A and 2B
    int Total;
    Total = 0;
    Numbers = 2;
    for(;Numbers <= 35; Numbers+=3)
    {
        Total = Total + Numbers;
    }
    cout << Total << endl;

    Numbers = 2;
    Total = 0;
    while(Numbers <= 35)
    {
        Total = Total + Numbers;
        Numbers = Numbers + 3;
    }
    cout << Total << endl;

//loops 3A and 3B
    Numbers = 0;
    Total = 2;
    for(;Numbers <= 40; Numbers+=2)
    {
        Total = Total + Numbers;
    }
    Total = Total / 20;
    cout << Total << endl;

    Numbers = 0;
    Total = 2;
    while(Numbers <= 40)
    {
        Total = Total + Numbers;
        Numbers = Numbers + 2;
    }
    Total = Total / 20;
    cout << Total << endl;
}
