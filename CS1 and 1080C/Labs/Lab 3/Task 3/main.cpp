#include <iostream>

using namespace std;

int main()
{
float Num,Sum, Bad;
    do
    {
        cout << "Enter Portive Number to Add or Enter Zero or Negative Number to End: ";
        cin >> Num;
        if (Num <= 0)
        {
            Bad = 1;
            break;
        }
        Sum = Sum + Num;

    } while(Bad != 1);

    cout << "Sum of Entered Numbers: " << Sum;
    cin >> Sum;

    return 0;
}
