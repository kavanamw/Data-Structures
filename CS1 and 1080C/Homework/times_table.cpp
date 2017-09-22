#include <iostream>
#include <iomanip>
using namespace std;

void tableHeader(int size)
{
    cout << left << setw(70/size) << 'x' << '|';
    for(int counter = 1;counter <= size; counter++)
    {
        cout << left << setw(70/size) << counter;
    }
    cout << endl;

    for(int counter = 1;counter <= 75; counter++)
    {
        cout << " ";
    }
    cout << endl;
}


int multiplication(int X, int Y)
{
    int Total;
    Total = X * Y;
    return(Total);
}

//main
int main()
{
    int size, Bad;
    Bad = 1;
    do
    {
        cout << "Enter the width ";
        cin >> size;

        if(size >= 1 && size <= 15)
        {
            Bad = 0;
        }
    }while(Bad == 1);

    tableHeader(size);
    for(int i = 1; i <= size;i++)
    {
        cout << left << setw(70/size) << i << setw(70/size) << "|";
        for (int k = 1; k <= size;k++)
        {
            int q;
            q = multiplication(i,k);
            cout << q << setw(70/size);
        }
        cout << endl;
    }
}

