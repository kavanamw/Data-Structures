#include <iostream>

using namespace std;

int main()
{
    int TSum = 0, FSum = 0, counter, Total = 0;
    while(counter < 1000)
    {
        if (counter % 3 == 0)
        {
            TSum = TSum + counter;
            //cout << TSum << " ";
        }

        else if (counter % 5 == 0)
        {
            FSum = FSum + counter;
        }
        counter++;
    }
    Total = TSum + FSum;
    cout << Total;
}
