#include <iostream>
#include<cmath>

using namespace std;

int main()
{
//variables needed
int D1, D2, Sum, flag;
flag = 1;

/*you win if you have the below values:
Wining values (7, 9, 11);
Loseing values (2, 3, 5);
*/

switch Sum
{
//enter the dice values
cout << "Enter the value of the first dice: ";
cin >> D1;
cout << "Enter the value of the second dice: ";
cin >> D2;

Sum = D1 + D2;

    case 1:
    {
        cout << "Winner" << endl;
        flag = 0;
    }

    case ((D1 + D2 == 2) || (D1 + D2 == 3) || (D1 + D2 == 5)):
    {
        cout << "Sorry" << endl;
        flag = 0;
    }

    default
    {
        cout << "Play Again" << endl;
        flag = 1;
    }
}while(flag == 1);

cout << "Game Over" << endl;

return 0;
}
