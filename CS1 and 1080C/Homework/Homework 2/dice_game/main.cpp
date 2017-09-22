#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    //variables needed
    int D1, D2, Total, Flag;

    /*you win if you have the below values:
    Wining values (7, 9, 11);
    Loseing values (2, 3, 5);
    */
    //enter the dice values
    do
    {
        cout << "Enter the value of the first dice: ";
        cin >> D1;
        cout << "Enter the value of the second dice: ";
        cin >> D2;
        Total = D1 + D2;

        switch (Total)
        {
          //winning cases
          case 7: cout << "Winner, Game over" << endl;
              Flag = 0;
              return 0;
          case 9:  cout << "Winner, Game over" << endl;
              Flag = 0;
              return 0;
          case 11: cout << "Winner, Game over" << endl;
              Flag = 0;
              return 0;

          //losing cases
          case 2: cout << "Sorry, Game over" << endl;
              Flag = 0;
              return 0;
          case 3:  cout << "Sorry, Game over" << endl;
              Flag = 0;
              return 0;
          case 5:  cout << "Sorry, Game over" << endl;
              Flag = 0;
              return 0;

          //defult case
          default: cout << "Play Again,Game over" << endl;
              Flag = 1;
        }
    } while(Flag == 1);
    return 0;
}
