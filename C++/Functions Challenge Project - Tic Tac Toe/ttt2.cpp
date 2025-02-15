#include <iostream>  
#include <algorithm>
#include "ttt_functions.hpp"


int main() {
    
    current_marker = 'x';
    drawBoard();
    std::cout << "\n";
    placeMarker(9);
    drawBoard();

}
