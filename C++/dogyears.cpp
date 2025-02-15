#include <iostream>

int main(){

    //My dog's age
    int dog_age = 5;

    //As the first 2 years of dog age is counted as 21 human years
    int early_years;
    //After first 2 years each dog year is counted as 4 human years
    int later_years = (dog_age - 2) * 4;
    //Final sum of early_year and later_years to get the resutl of human_years
    int human_years = early_years + later_years;

    //Statement to output human_years
    std::cout << "My name is Utkarsh! Ruff, ruff, I am " << human_years << " years old in human years.\n";

}