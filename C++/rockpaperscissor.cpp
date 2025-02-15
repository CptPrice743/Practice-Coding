#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
    /* 
    This is an alternative to rock, paper, scissors because,
    when you know someone well enough, 75-80% of any Rock Paper Scissors games you play with that person end up in a tie.
    So, here is a slight variation that reduces that probability.
    */

    srand(time(NULL));
    int computer =rand() % 5 + 1;
    int user = 0;

    //Prompting the user to input either Rock, Paper, Scissors
    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Lizard\n";
    std::cout << "4) Spock\n";
    std::cout << "5) Scissor\n";

    std::cout << "shoot!\n";
    std::cin >> user;
    std::cout << "====================\n";

    //Conditioanal to prevent invalid input
    if(user <= 5){} else {
        std::cout << "Invalid\n";
        return 0;
    }

    std::cout << "====================\n";
    std::cout << "Computer: " << computer << "\n";
    std::cout << "====================\n";

    //Conditional for Rock, Paper, Scissors
    if(user == 5 && computer == 2){
	    std::cout << "User wins!\n";
    } else if(user == 2 && computer == 1){
	    std::cout << "User wins!\n";
    } else if(user == 1 && computer == 3){
        std::cout << "User wins!\n";
    } else if(user == 3 && computer == 4){
        std::cout << "User wins!\n";
    } else if(user == 4 && computer == 5){
        std::cout << "User wins!\n";
    } else if(user == 5 && computer == 3){
        std::cout << "User wins!\n";
    } else if(user == 3 && computer == 2){
        std::cout << "User wins!\n";
    } else if(user == 2 && computer == 4){
        std::cout << "User wins!\n";
    } else if(user == 4 && computer == 1){
        std::cout << "User wins!\n";
    } else if(user == 1 && computer == 5){
	    std::cout << "User wins!\n";
    } else {
        std::cout << "Computer wins!\n";
    }

}