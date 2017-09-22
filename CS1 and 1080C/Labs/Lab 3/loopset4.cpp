#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //varible declariation
    int Snum , Enum , SumOdd , SumEven , SnumOdd , SnumEven , TotalSum, Steps , c , N;
    float Avg;

    //inputting the number
    do
    {
    cout << "Starting Number: ";
    cin >> Snum;
    cout << "Ending Number: ";
    cin >> Enum;
    cout << "Steps: ";
    cin >> Steps;
    } while ((Steps < 1) || (Snum > Enum));

    //even sum
    if (Snum % 2 == 0)
    {
        SnumEven = Snum;
        SnumOdd = Snum + (1*Steps);
        SumOdd = 0;
        SumEven = 0;

        while (SnumOdd <= Enum)
        {
            SumOdd = SumOdd + SnumOdd;
            SnumOdd = SnumOdd + (2*Steps);
        }
        while (SnumEven <= Enum)
        {
            SumEven = SumEven + SnumEven;
            SnumEven = SnumEven + (2*Steps);
        }
    }

    //else do the odd sum parts
    else
    {
        SnumOdd = Snum;
        SnumEven = Snum + (1*Steps);
        SumOdd = 0;
        SumEven = 0;

        while (SnumOdd <= Enum)
        {
            SumOdd = SumOdd + SnumOdd;
            SnumOdd = SnumOdd + (2*Steps);
        }
        while (SnumEven <= Enum)
        {
            SumEven = SumEven + SnumEven;
            SnumEven = SnumEven + (2*Steps);
        }
    }

    //counter loop so that the average is correct
    c = 1;
    for (N = Snum; N < Enum; N = N + Steps)
    {
        c++;
    }

    TotalSum = SumOdd + SumEven;
    Avg = TotalSum / c;

    //outputs
    cout << "Odd Number Sum: " << SumOdd << endl;
    cout << "Even Number Sum: " << SumEven << endl;
    cout << "Sum of ALL Numbers: " << TotalSum << endl;
    cout << "Average: " << Avg << endl;

    return 0;
}
