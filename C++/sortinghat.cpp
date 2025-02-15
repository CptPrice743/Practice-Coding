#include <iostream>

int main(){

    //Declaring four int variables for houses
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    //Other int variables to store each of their answers to the four quiz questions
    int answer1;
    int answer2;
    int answer3;
    int answer4;

    //Statement that tells the Muggle that they have started the quiz
    std::cout << "The Sorting Hat Quiz!\n";
    std::cout << "------------------Questions------------------\n";

    //Statement for outputing questions
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n" << "1) The Good\n" << "2) The Great\n" << "3) The Wise\n" << "4) The Bold\n";

    //Input from user
    std::cout << "Enter number (1-4): ";
    std::cin >> answer1;

    //If-Else statement to appoint points
    if(answer1 == 1){
        hufflepuff++;
    } else if(answer1 == 2){
        slytherin++;
    } else if(answer1 == 3){
        ravenclaw++;
    } else if(answer1 == 4){
        gryffindor++;
    } else {
        std::cout << "Invalid input\n";
    }

    std::cout << "--------------------------------------------\n";

    std::cout << "Q2) Dawn or Dusk?\n" << "1) Dawn\n" << "2) Dusk\n";
    std::cout << "Enter number (1-2): ";
    std::cin >> answer2;
    if(answer2 == 1){
        gryffindor++;
        ravenclaw++;
    } else if (answer2 == 2){
        hufflepuff++;
        slytherin++;
    } else {
        std::cout << "Invalid input\n";
    }

    std::cout << "--------------------------------------------\n";

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n" << "1) The violin\n" << " 2) The trumpet\n" << " 3) The piano\n" << "4) The drum\n";
    std::cout << "Enter number (1-4): \n";
    std::cin >> answer3;
    if(answer3 == 1){
        slytherin++;
    } else if(answer3 == 2){
       hufflepuff++; 
    } else if(answer3 == 3){
        ravenclaw++;
    } else if(answer3 == 4){
        gryffindor++;
    } else{
        std::cout << "Invalid input\n";
    }

    std::cout << "--------------------------------------------\n";

    std::cout << "Q4) Which road tempts you most?\n" << "1) The wide, sunny grassy lane\n" <<  "2) The narrow, dark, lantern-lit alley\n" << "3) The twisting, leaf-strewn path through woods\n" << "4) The cobbled street lined (ancient buildings)\n";
    std::cout << "Enter number (1-4)\n";
    std::cin >> answer4;
    if(answer4 == 1){
        hufflepuff++;
    } else if(answer4 == 2){
        slytherin++;
    } else if(answer4 == 3){
        gryffindor++;
    } else if(answer4 == 4){
        ravenclaw++;
    } else{
        std::cout << "Invalid input\n";
    }


    //Declaring another variable "max" that starts at 0
    int max = 0;
    std::string house;

    //Code to find the maximum points
    std::cout << "\nYou have been assigned to ";
    
    if(gryffindor > max){
        max = gryffindor;
        house = "Gryffindor";
    } else if(hufflepuff > max){
        max = hufflepuff;
        house = "Hufflepuff";
    } else if(ravenclaw > max){
        max = ravenclaw;
        house = "Ravenclaw";
    } else if(slytherin < max){
        max = slytherin;
        house = "Slytherin"; 
    }

    std::cout << house << "!\n";

    


}
