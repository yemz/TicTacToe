#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe {

private:
  // Variables
  char block[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; // Game board blocks
  int player; // Actual player
  int num; // Number to play
  int counter; // Counts for next player turn
  char marker; // 'X' or 'O'
public:
  // Logic
  TicTacToe(); // Constructor
  void gameBoard();
  void nextTurn();
  void playGame();
  bool winner();
  bool tieGame();
};

#endif // TICTACTOE_H
