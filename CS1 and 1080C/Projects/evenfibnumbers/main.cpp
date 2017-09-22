#include <iostream>

using namespace std;

int main()
{
    int x = 1, y = 2, counter = 0, next = 0, EvenSum = 0;
    while(next < 89)
    {
        next = x + y;
        x = y;
        y = next;
        //cout << next << endl;
        if (next % 2 == 0)
        {
            EvenSum = EvenSum + next;
            //cout << EvenSum << endl;
        }
    }
    next = next + 2;
    //cout << "done";
    cout << EvenSum;
    return 0;
}
//for (counter = 0; next < 400000000; counter++)
