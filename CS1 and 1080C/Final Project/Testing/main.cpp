#include <iostream>
#include <string>

int game_start();
void instructions();
bool isGameover(char (&arr)[3][3]);
char d = '-';

int main()
{
  std::cout << std::string(d, 30);
  std::cout << "1. Play\n2. Instructions\n3. Exit";
  std::cout << std::string(d, 30);
  std::cout << std::endl;

  int input;

  std::cin >> input;

  switch(input){
    case 1:
      game_start();
      break;
    case 2:
      instructions();
      break;
    case 3:
      return 0;
      break;
    default:
      std::cout << "You didnt enter a valid option. Exiting the program. ";
      return 0;
   }

}

class tictactoe
{
  public:
      int play(char (&arry)[3][3], const int x, const int y);
      void update(const char arr[3][3]);
      std::string name;
      char symbol;
};

int tictactoe::play(char (&arry)[3][3], const int x, const int y)
{

   if (arry[x][y] == d)
   {
        arry[x][y] = symbol;
        return 1;
   }
   else
   {
        return 0;
   }
}

bool isGameover(char (&arr)[3][3])
{
   for (int i = 0; i < 3; i++)
   {
     for (int j = 0; i < 3; j++)
     {
       if ( (&arr)[i][j] == (&arr)[i][j+1] && (&arr)[i][j] == (&arr)   [i][j+2] ||
            (&arr)[i][j] == (&arr)[i+1][j] && (&arr)[i][j] == (&arr)[i+2][j] ||
            (&arr)[0][0] == (&arr)[1][1] && (&arr)[0][0] == (&arr)[2][2] ||
            (&arr)[0][2] == (&arr)[1][1] && (&arr)[0][2] == (&arr)[0][2])
       {
         if (arr[i][j] == 'X' || arr[i][j] == 'O') /// makes sure that the Bool doesnt return "true" if there are three empty spaces in a row.
         {
           return true;
         }
         else
         {
           return false;
         }
       }
       else
       {
         return false;
       }
     }
 }
}

void tictactoe::update(const char arr[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << arr[i][j];
     }
  }
}

int game_start()
{
  std::string uinput;

  std::cout << "Player one name: ";
  std::cin >> uinput;
  tictactoe Player1;
  Player1.name = uinput;
  Player1.symbol = 'X';
  std::cout << "Player two name: ";
  std::cin >> uinput;
  tictactoe Player2;
  Player2.name = uinput;
  Player2.symbol = 'O';
  int turn = 1;
  char board[3][3] = {d, d, d, d, d, d, d, d, d};

  while (!isGameover(board)) ///main game loop
  {
    while (turn == 1)
    {
      Player1.update(board);
      std::cout << "Where would you like to move:  ";
      std::cin >> uinput;
      uinput.erase(uinput.find("("));/// gets rid of the symbols in a user's input
      uinput.erase(uinput.find(","));/// so it can be used in the play() function
      uinput.erase(uinput.find(")"));///
      if (!(Player1.play(board, uinput[0], uinput[1])))///checks to   make sure the move is valid
      {
        std::cout << "Move failed. Resetting...\n";
        continue;
      }
      else
      {
        turn = 2;
      }
    }
    while (turn == 2)
    {
        Player2.update(board);
        std::cout << "It is your turn " << Player2.name << ". Where would you like to move: ";
        std::cin >> uinput;
        uinput.erase(uinput.find("("));
        uinput.erase(uinput.find(","));
        uinput.erase(uinput.find(")"));
        if (!(Player2.play(board, uinput[0], uinput[1])))
        {
            std::cout << "Move failed. Resetting...\n";
            continue;
        }
        else
        {
            turn = 1;
        }
    }
  }
  if (isGameover(board))
  {
    if (turn == 1)
    {
        std::cout << "Congratulations, " << Player1.name << ". You win!";
    }
    if (turn == 2)
    {
        std::cout << "Congratulations, " << Player2.name << ". You win!";
    }
  }
}

void instructions()
{
    std::cout << "To make a move, type the coordinates of the location on the board you would like to move.";
    std::cout << "Ex: typing ""(0,0)"" without the parenthesis would make a move in the top left square of the board.";
    std::cout << "The board is ordered the same way one would order a 3x3 matrix.";
    std::cout << "To play the game, type 1. To exit, type 2." <<     std::endl;
    int usr;
    std::cin >> usr;
    switch(usr)
    {
        case 1:
            game_start();
            break;
        case 2:
            break;
        default:
            break;
    }
}
