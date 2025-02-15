#include <iostream>
#include <cmath>

int main(){
    
    //Declaring the variables
    double a;
    double b;
    double c;
    double root1;
    double root2;

    //Code to prompt user to input the value of a, b, c
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    //Code for calculating roots
    root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

    //Outputting the values
    std::cout << root1 << " , " << root2;
}