
#include <iostream>
#include "tictactoe.h"
#include "tictactoe.cpp"

using namespace std;

int main () {
   // Change font color to green
   system("color 0a");
   // Initialize counter
   int counter = 1;
   // Class Object
   TicTacToe game;
  // Display gameBoard function
   game.gameBoard();

// While counter is less than 10 continue displaying functions
while(counter <= 10) {

  game.gameBoard();
  game.nextTurn();
  game.playGame();
  game.winner();
  game.tieGame();

}// End while
   return 0;
}
