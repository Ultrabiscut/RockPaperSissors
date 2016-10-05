#include <iostream>
using namespace std;

//Program: RockPaperScissors
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: A program to score the ro-paper-scissors
//			game score between two players


int main()
{
	//declare variables
	char cPlayer1;
	char cPlayer2;
	char cResp;


	//nested loop
	do
	{
		//get input
		cout << "Player 1: ";
		cin >> cPlayer1;
		cPlayer1 == toupper(cPlayer1);
		cout << "Player 2: ";
		cin >> cPlayer2;
		cPlayer2 == toupper(cPlayer2);

		//else if
		if ((cPlayer1 == 'r') && (cPlayer2 == 'r'))
			cout << "Player 1 & 2 tie!" << endl;
		else if ((cPlayer1 == 'r') && (cPlayer2 == 'p'))
			cout << "Papers covers rock.  Player 2 wins!" << endl;
		else if ((cPlayer1 == 'r') && (cPlayer2 == 's'))
			cout << "Rock breaks scissors.  Player 1 wins!" << endl;
		else if ((cPlayer1 == 'p') && (cPlayer2 == 'p'))
			cout << "Player 1 & 2 tie!" << endl;
		else if ((cPlayer1 == 'p') && (cPlayer2 == 's'))
			cout << "Scissors cuts paper.  Player 2 wins!" << endl;
		else if ((cPlayer1 == 'p') && (cPlayer2 == 'r'))
			cout << "Paper covers rock.  Player 1 wins!" << endl;
		else if ((cPlayer1 == 's') && (cPlayer2 == 'p'))
			cout << "Scissors cuts paper.  Player 1 wins!" << endl;
		else if ((cPlayer1 == 's') && (cPlayer2 == 's'))
			cout << "Player 1 & 2 tie!" << endl;
		else if ((cPlayer1 == 's') && (cPlayer2 == 'r'))
			cout << "Rock breaks scissors.  Player 2 wins!" << endl;

		//play agian do..while loop
		do
		{
			//ask them if they watn to play again
			cout << "Play again? (Y/N) : ";
			cin >> cResp;
			cResp == toupper(cResp);
		} while ((cResp != 'y') && (cResp != 'n'));

	} while (cResp == 'y');
	


	return 0;
}