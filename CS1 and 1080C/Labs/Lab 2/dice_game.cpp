#include <iostream>
#include<cmath>

using namespace std;

int main()
{
		//variables needed
		int D1, D2, Sum, Win, Lose, flag;
		flag = 1;

		/*you win if you have the below values:
		Wining values (7, 9, 11);
		Loseing values (2, 3, 5);
		*/

		do
		{
				//enter the dice values
				cout << "Enter the value of the first dice: ";
				cin >> D1;
				cout << "Enter the value of the second dice: ";
				cin >> D2;

				if ((D1 + D2 == 7) || (D1 + D2 == 9) || (D1 + D2 == 11)){
						cout << "Winner" << endl;
						flag = 0;
				}
				else if((D1 + D2 == 2) || (D1 + D2 == 3) || (D1 + D2 == 5)){
						cout << "Sorry" << endl;
						flag = 0;
				}
				else{
						cout << "Play Again" << endl;
						flag = 1;
				}
		}while(flag == 1);

		cout << "Game Over" << endl;

		return 0;
}
