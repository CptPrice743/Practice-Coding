#include <iostream>
#include <cstdlib>

int main(){

    //Outputing phrase "MAGIC 8-BALL" as it will be same across all executions
    std::cout << "MAGIC 8-BALL\n";

    //This sets the seed for random number generator
    srand(time(NULL));

    //This is code to randomize the answer
    int answer = std::rand() % 10;
    std::cout << answer << "\n";

    if(answer == 0){
        std::cout << "It is certain.\n";
    } else if(answer == 1){
        std::cout << "It is decidedly so.\n";
    } else if(answer == 2){
        std::cout << "Without a doubt.\n";
    } else if(answer == 3){
        std::cout << "Yes - definitely.\n";
    } else if(answer == 3){
        std::cout << "You may rely on it.\n";
    } else if(answer == 4){
        std::cout << "As I see it, yes.\n";
    } else if(answer == 5){
        std::cout << "Most likely.\n";
    } else if(answer == 6){
        std::cout << "Outlook good.\n";
    } else if(answer == 7){
        std::cout << "Yes.\n";
    } else if(answer == 8){
        std::cout << "Signs point to yes.\n";
    } else if(answer == 9){
        std::cout << "Reply hazy, try again.\n";
    } else{
        std::cout << "Very doutful\n";
    }
}