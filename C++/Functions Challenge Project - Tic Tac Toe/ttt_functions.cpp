#include <iostream>
#include <vector>
#include <algorithm>
#include "ttt_functions.hpp"


//Declare Functions
void drawBoard(){

    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    std::cout << " ---------\n";
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    std::cout << " ---------\n";
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    
}

void placeMarker(int slot){

    int row;
    int col;
    if(slot % 3 == 0) {
        
        row = (slot / 3) - 1;
        col = 2;
    
    }    
    else {
        
        row = (slot / 3);
        col = (slot % 3) - 1;
    
    }
   
    board[row][col] = current_marker;

}

int winner(){

    for(int i = 0; i < 3; i++) {

        //rows
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) {

            return current_player;
        
        }

        //columns
        else if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) {

            return current_player;
        }

        //diagonals
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {

            return current_player;

        }

        if(board[2][0] == board[1][1] && board[1][1] == board[0][2]) {

            return current_player;
        }
    }
}