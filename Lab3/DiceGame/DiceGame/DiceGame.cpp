#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <stdlib.h>

#define MAX_PLAYERS 10

using namespace std;

/*
Class representing an N-sided die
*/
class Dice {
private:
	int numSides;
public:
	// Perform a single roll of the die
	int roll() {
		cout << "Enter the number of sides: ";
		cin >> numSides;
		srand((unsigned)time(0));
		cout << "Roll: " << rand() % numSides + 1 << endl;
	}
};

/*
Class representing a Game Player
*/
class Player {
private:
	string name;
	int score;
public:
	// Getter : Player Name
	string getName() {
		return name;
	}
	// Getter : Score
	int getScore() {
		return score;
	}
	// Increases the player's score by a specified value
	void addToScore(int val) {
		score = score + val;
	}
};

/*
Abstract class DiceGame
*/
class DiceGame {

protected:
	Player *players[MAX_PLAYERS];
	Dice *dice;
	int numPlayers, numDice;

public:
	virtual void play() = 0;

	void intPlayers()
	{
		string Name;
		int Score;
		do
		{
			cout << "Enter the number of players: ";
			cin >> numPlayers;
		} while (numPlayers > 10);

		for (int c = 0; c < numPlayers; c++)
		{
			cout << "Enter Player " << c + 1 << "'s name: ";
			cin >> Name;
			cout << "Enter Player " << c + 1 << "'s score: ";
			cin >> Score;
			//players[c] = new Player(Name, Score);
		}
	}

	void displayScore()
	{
		for (int c = 0; c < numPlayers; c++)
		{
			cout << "<" << players[c]->getName() << ">:<" << players[c]->getScore();
		}
	}

	void WriteScoresToFile()
	{
		ofstream PlayerFile("PlayerInfo.txt", std::ios_base::app);
		if (PlayerFile.is_open())
		{
			for (int c = 0; c < numPlayers; c++)
			{
				PlayerFile << "<" << players[c]->getName() << ">:<" << players[c]->getScore() << endl;;
			}
			PlayerFile.close();
		}
		else cout << "I'm not able to open file";
	}
};

void Knockout()
{
	//DiceGame KoGame;
	//Dice KoDice;
	//KoDice roll();
}

int main() {
	// Base class pointer'
	int Game = 0;
	cout << "Which game would you like to play, 1 for Knock Out, 2 for Boston Dice Game ";
	cin >> Game;

	if (Game == 1)
	{
		//DiceGame *game = new Knockout;
		//game -> initPlayers();
		//game -> play();
		//game -> writeScoreToFile();
	}

	DiceGame *game;

	Dice Nside;
	Nside.roll();
	Player Gplayer;
	Gplayer.getName();
	Gplayer.getScore();
}


