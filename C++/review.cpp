#include <iostream>
#include <vector>

int main(){
  
  //Declaring variables
  int even = 0;
  int odd = 1;
  //Declaring a vector with random numbers
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

  //for statement to iterate through vector
  for(int i = 0; i < numbers.size(); i++){

    //if else statement to sum up the numbers
    if(numbers[i] % 2 == 0){
        even += numbers[i];
    } else{
        odd *= numbers[i];
    }   
  }

  //Output
    std::cout << "The sum of even numbers is " << even << "\n";
    std::cout <<"The product of odd numbers is " << odd << "\n";
}