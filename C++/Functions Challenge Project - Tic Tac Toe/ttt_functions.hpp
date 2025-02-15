#include <vector>

//Declare variables
char board [3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char current_marker;
int current_player;


//Declare functions
void drawBoard();
void placeMarker(int slot);
int winner();