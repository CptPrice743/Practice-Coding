#include <iostream>


int main(){
    //My dog's age
    int dog_age = 5;

    //As the first 2 years of dog age is counted as 21 human years
    int early_years;


if(dog_age < 2){
        human_years = dog_age * 10.5;
        std::cout << "My name is Utkarsh! Ruff, ruff, I am " << human_years << " years old in human years.\n";
    } else{
        early_years = 21;
        int later_years = (dog_age - 2) * 4;
        int human_years = early_years + later_years;

        std::cout << "My name is Utkarsh! Ruff, ruff, I am " << human_years << " years old in human years.\n";
    }
}