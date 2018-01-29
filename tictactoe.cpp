#include <iostream>
#include <conio.h> //getch
#include <stdio.h>
#include <stdlib.h> //system
#include <time.h>
#include "tictactoe.h"

using namespace std;

   // Constructor
   TicTacToe::TicTacToe() {
     // Initialize variables
     player = 1;
     counter = 1;
     num = 1;
   }

void TicTacToe::gameBoard() {
  // Function to display board
  system("color 0a");
  system("cls"); //clear console/
  cout << "\n\n\t\t\t\t       Tic Tac Toe" << endl << endl;
  cout << "\t\t\t      Player 1 = X  |  Player 2 = O" << endl;
  cout << "\t\t   __________________________________________________";
  cout << "\n\n\n";

  cout << "\t\t\t\t" << "       ||       ||       " << endl;
  cout << "\t\t\t\t" << "   " << block[1] << "   ||  " << " " << block[2] << "   ||  " << " " << block[3] << endl;
  cout << "\t\t\t\t" << "_______||_______||_______" << endl;
  cout << "\t\t\t\t" << "       ||       ||       " << endl;
  cout << "\t\t\t\t" << "   " << block[4] << "   ||  " << " " << block[5] << "   ||  " << " " <<  block[6] << endl;
  cout << "\t\t\t\t" << "_______||_______||_______" << endl;
  cout << "\t\t\t\t" << "       ||       ||       " << endl;
  cout << "\t\t\t\t" << "   " << block[7] << "   ||  " << " " << block[8] << "   ||  " << " " << block[9] << endl;
  cout << "\t\t\t\t" << "       ||       ||       " << endl;

}// End gameBoard

void TicTacToe::nextTurn() {
  // Switch players after each turn
  if(!counter) {
    if(player == 1){
      player = 2;
    } else {
      player = 1;
    }
    counter++;
  }
counter--;
// Display who's player turn
cout <<"\n\t\t\t\t      Player " << player << " turn" << endl;
// Ask user for a number from the board game
cout <<"\t\t\t\t     Select a Number: " << endl;
cout <<"\t\t\t\t\t    ";
cin >> num;

}// End nextTurn

void TicTacToe::playGame() {
   // Player 1 = X and Player 2 = O
   marker = (player == 1) ? 'X' : 'O';
   // Fill each game board block with a marker after each player turn
   if (num >= 1 && num <= 9) {
      if(player == 1 || player == 2) {
          if (num == 1 && block[1] == '1') {
              block[1] = marker; //'X' or 'O'
          } else if (num == 2 && block[2] == '2'){
              block[2] = marker;
          } else if (num == 3 && block[3] == '3'){
              block[3] = marker;
          } else if (num == 4 && block[4] == '4'){
              block[4] = marker;
          } else if (num == 5 && block[5] == '5'){
              block[5] = marker;
          } else if (num == 6 && block[6] == '6'){
              block[6] = marker;
          } else if (num == 7 && block[7] == '7'){
              block[7] = marker;
          } else if (num == 8 && block[8] == '8'){
              block[8] = marker;
          } else if (num == 9 && block[9] == '9'){
              block[9] = marker;
          } else {
             // If the number is repeated
              system("color 0c");
              cout << "\n\t\t\t    Invalid Move! Number already taken.\n";
                getch(); //pause
                counter++;
          }
          }
          } else {
              // If number entered is less than 1 or greater than 9
              system("color 0c"); //change font color to red
              cout << "\n\t\t\t\tInvalid Number." << endl;
              cout << "\t\t\t\tEnter a number from 1 to 9." << endl;
                  getch(); //pause
                  counter++;
          }
} // End humanGame

bool TicTacToe::winner() {
  // All winning possibilities
  int board[8][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9},
                     {3,6,9},
                     {1,4,7},
                     {2,5,8},
                     {1,5,9},
                     {7,5,3}};
   // Loop through all possibilities
    for(int i = 0; i < 8; i++) {
      if ((block[board[i][0]] == block[board[i][1]])
         && (block[board[i][1]] == block[board[i][2]])
         && block[board[i][0]] != 0)
         { // If in the array there are 3 equal markers, display winner
           cout <<"\n\t\t\t\t     Player " << block[board[i][0]] << " WINS!\n";
                getch(); //pause
                return true;
         }
    }
      // Else, not a winner yet, continue
      return false;
}

bool TicTacToe::tieGame(){
  // Loop all blocks
  for (int i = 1; i <= 9; i++) {
          if (block[i] != 'X' && block[i] != 'O') {
              // If some blocks are empty, not a tie yet
              return false;
          }
      }
      // Else if all blocks are filled, game is a tie
      cout << "\t\t\t\tThe game is a tie!  Play again!" << endl;
      getch();
      return true;
  }
