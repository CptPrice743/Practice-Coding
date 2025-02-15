#include <iostream>
#include "ufo_functions.hpp"

int main()
{
    greet();

    //Declaring and initializing variables
    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;

    std::vector<char> incorrect;
    
    bool guess = false;

    char letter;

    //while loop for misses
    while(answer != codeword && misses < 7){

        //Code for each turn here
        display_misses(misses);
        display_status(incorrect, answer);

        std::cout << "\nPlease enter your guess: ";
        std::cin >> letter;

        for(int i = 0; i < codeword.length(); i++){

            if(letter == codeword[i]){

                answer[i] = letter;
                guess = true;

            }

        }

        if(guess == true)
            std::cout << "\nCorrect! You are closer to cracking the codeword.";
        else{

            std::cout << "\nIncorrect! the tractor beam pulls the person in further.";
            incorrect.push_back(letter);
            misses++;

        }

        guess = false;
        
    }

    end_game(answer, codeword);

}