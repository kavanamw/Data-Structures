#include "GameLogic.h"
#include "Board.h"
#include "Player.h"


void GameLogic::allocateFirstTurns(Player & player1, Player & player2, char choice)
{
    if (choice == 'y')
    {
        player1.setGamePiece(X);
        player2.setGamePiece(O);
    }

    if (choice == 'n')
    {
        player1.setGamePiece(O);
        player2.setGamePiece(X);
    }
}

void GameLogic::decideFirstTurn(Player& player1, Player& player2)
{
    bool chosen = false;
    char choice = ' ';
    while (!chosen)
    {
        std::cout << "Would you like to go first? 'y' - Yes. 'n' - No.\n";
        std::cin >> choice;

        if (choice == 'y' || choice == 'n')
            chosen = true;
    }

    allocateFirstTurns(player1, player2, choice);
}


void GameLogic::game(Board & board, Player& player1, Player& player2, GameLogic& gameLogic)
{

    char turn = X; //First turn
    decideFirstTurn(player1, player2);

    while (!m_FoundWinner)
    {
        gameRound(board, player1, player2, gameLogic);
    }

    board.displayBoard();

    //Announce winner

    std::cout << "Winner: " << m_Winner << "\n";

    if (m_Winner == player1.getGamePiece())
        std::cout << "Player 1 wins the game.\n";

    if (m_Winner == player2.getGamePiece())
        std::cout << "Player2 wins the game.\n";
}

void GameLogic::gameRound(Board & board, Player & player1, Player & player2, GameLogic& gameLogic)
{
    while (!m_FoundWinner)
    {
        if (m_Turn == player1.getGamePiece())
        {
            board.displayBoard();
            std::cout << "Player 1 move.";
            player1.move(board);
            m_FoundWinner = board.checkForWinner(gameLogic, player1.getGamePiece());
            changeTurn(player1.getGamePiece());
        }

        else
        {
            board.displayBoard();
            std::cout << "Player 2 move.";
            player2.move(board);
            m_FoundWinner = board.checkForWinner(gameLogic, player2.getGamePiece());
            changeTurn(player2.getGamePiece());
        }
    }
}

void GameLogic::changeTurn(char turn)
{
    if (turn == X)
        m_Turn = O;

    else
        m_Turn = X;
}

void GameLogic::setWinner(char gamePiece)
{
    m_Winner = gamePiece;
}
