#include <iostream>

int main(){
    int tempf;
    int tempc;

    //Code asking user to input temperature
    std::cout << "Enter the temperature in Fagrenheit: "
    std::cin >> tempf;

    //Statement stating the current temp
    std::cout << "The current temperature is " << tempf << " degrees Fahrenheit.\n";

    //Calculation for converting F to C
    tempc = (tempf - 32) / 1.8;

    //Statement outputing temp in C
    std::cout << "The Temperature is " << tempc << " degree Celcius";
}