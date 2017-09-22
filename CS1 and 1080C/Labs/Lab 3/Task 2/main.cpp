#include <iostream>

using namespace std;

int main()
{
//loops 1A and 1B
    float Numbers = 25;
    for(;Numbers >= 0; Numbers-= .5)
    {
        cout << Numbers << ",";
    }

    Numbers = 25.5;
    while(Numbers >= .5)
    {
        Numbers = Numbers - (.5);
        cout << Numbers << ",";
    }

//loops 2A and 2B
    Numbers = 200;
    int Total;
    for(;Numbers >= 20; Numbers--)
    {
        Total = Total + Numbers;
    }
    Total = Total/180;
    cout << Total;

    Numbers = 200;
    Total = 0;
    while(Numbers >= 20)
    {
        Total = Total + Numbers;
        Numbers = Numbers - 1;
    }
    Total = Total/180;
    cout << Total << ",";
//loops 3A and #B
    Numbers = 40;
    float Total3 = 0;
    for(;Numbers >= 2; Numbers-=.5)
    {
        Total3 = Total3 + Numbers;
    }
    cout << Total3 << endl;

    Numbers = 40;
    Total3 = 0;
    while(Numbers >= 2)
    {
        Total3 = Total3 + Numbers;
        Numbers = Numbers - .5;
    }
    cout << Total3 << ",";
}
