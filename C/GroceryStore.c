#include <stdio.h>

int main(){
//Following are the variables
int appleQuantity;
double applePrice = 1.49;
float appleReview;
int appleReviewDisplay;
const char appleLocation = 'F';  

//To set values to the variables
appleQuantity = 23;
appleReview = 82.5;
appleReviewDisplay = (int)appleReview;

//Following line will be the output
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);
}
