#include <stdio.h>

int main() {
  
 //These are the variables and their values 
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview = 87.5;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 0;

 appleQuantity = 23;
 appleReview = 82.5;
 appleReviewDisplay = appleReview;
 dayOfWeek += 3;
 
 //Following is the if-else statement to see if there should be a sale or not
 if(dayOfWeek % 7 == 3 || appleQuantity > 10)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
