#include <iostream>

int main()
{
    //Variables 
    int choice1;

    //Beginning
    std::cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures.\n";
    std::cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon.\n";
    std::cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
    std::cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";
    std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
    std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
    std::cout << "*      *      *\n";
    std::cout << "What do you do?\n";
    std::cout << "Enter 1 - if you ask the Gryphon next to you what the jurors are doing.\n";
    std::cout << "Enter 2 - if you sneak a tart.\n";
    std::cout << "Enter 3 - if you sit and wait for the trial to begin.\n";
    
    std::cin >> choice1;

    for(int i = 1; i < 3; i++)
    {
        if(choice1 == 1)
            std::cout << "Oops...You're dead...:(";
        else if(choice1 = 2)
            std::cout << "Oops...You're dead...Never steal from lion's den!";
        else if(choice1 == 3)
            std::cout << "Yayy...You're alive...patience always bears sweeter fruit!";
        else
            std::cout << "Invalid input";
    }
}