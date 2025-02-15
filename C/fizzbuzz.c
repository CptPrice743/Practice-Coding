#include<stdio.h>
int main(){

    //Setting up the varible
    int i;

    //Code to output Fizz, Buzz and FizzBuzz
    for (int i = 1; i <= 100; i++){
        if (i % 3 == 0){
            printf("Fizz\n", i);
        }
        else if (i % 5 == 0){
            printf("Buzz\n", i);
        }
        else if (i % 15 == 0){
            printf("FizzBuzz\n", i);
        }
        else {
            printf("%d\n", i);
        }
     }
}