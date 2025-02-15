#include <stdio.h>

int main() {

    int num1;
    int num2;
    int sum;
    int dum1;
    int dum2;
    int dum3;

    printf("Enter first number: ");
    scanf("%i", &num1);

    printf("\nEnter second number: ");
    scanf("%i", &num2);

    sum = num1 + num2;
    printf("Addition of numbers is %i\n", sum);

    dum1=num1-num2;
    printf("%i",dum1);
    
    dum2=num1/num2;
    printf("\n%i",dum2);

    dum3=num1*num2;
    printf("\n%i",dum3);




}