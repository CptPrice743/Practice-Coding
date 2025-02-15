#include <iostream>

int main(){

    //Declaring varibles for various currencies
    double pesos;
    double reais;
    double soles;
    double dollars;

    //Asking user to input the amount of currency
    std::cout << "Enter number of Colombain Pesos: ";
    std::cin >> pesos;
    std::cout << "Enter number of  Brazilian Reais: ";
    std::cin >> reais;
    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    /*  1 peso = 0.050 USD
        1 reais = 0.20 USD
        1 sole = 0.26 USD
    */
    dollars = (pesos*0.050) + (reais*0.20) + (soles*0.26);
    std::cout << "US Dollars = $" << dollars;

}