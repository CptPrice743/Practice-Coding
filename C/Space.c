#include <stdio.h>

int main() {
  //Following are the variables  
  int earthWeight;
  int planetNumber;
  double relativeWeight;
  
  //This is to ask for the earthWeight from the user
  printf("Enter Weight =");
  scanf("%d", &earthWeight);
  printf("Weight on Earth is %d\n", earthWeight);
  
  //This is to ask for the planetNumber from the user
  printf("Enter Planet Number:");
  scanf("%d", &planetNumber);
  printf("Number of planet is %d\n", planetNumber);
  

  //Following the the if-else statements to calculate the relativeWeight and the output
  switch (planetNumber){
    case 1:
        relativeWeight = earthWeight * 0.38;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    case 2:
        relativeWeight = earthWeight * 0.91;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    case 3:
        relativeWeight = earthWeight * 0.38;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    case 4:
        relativeWeight = earthWeight * 2.34;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    case 5:
        relativeWeight = earthWeight * 1.06;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    case 6:
        relativeWeight = earthWeight * 0.92;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    case 7:
        relativeWeight = earthWeight * 1.19;
        printf("Your weight on plant %d is %.2f", planetNumber, relativeWeight);
        break;
    default:
        printf("Invalid\n");
        break;
  }
}
