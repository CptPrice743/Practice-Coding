#include <stdio.h>
#include <stdbool.h>

/* 
you can even write this one as:
   bool is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}
*/ 

//This is to decide whether the year is leap year or not
bool is_leap_year(int year){
    if(year % 4 != 0){
        return false;
    } else if(year % 100 != 0){
        return true;
    } else if(year % 400 != 0){
        return false;
    } else {
      return true;
      }
    
}

//An array to store the number of days in a month starting with 1 i.e. January and keeping the first value 0 so January can get 1
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//This is code to add days to the date that is input by user
void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add){
    int days_left_in_month;
    while(days_left_in_month > 0){
        days_left_in_month = days_in_month[*mm]  - *dd;
    
    if(days_in_month[2] && is_leap_year(*yy) == true){
            days_left_in_month++;
    }

    if(days_left_to_add > days_left_in_month){
        days_left_to_add -= days_left_in_month + 1;
        *dd = 1;

        if(*mm == 12){
            *mm = 1;
            *yy;
        } else{
            *mm = *mm + 1;
        }
    } else{
        *dd = days_left_in_month + *dd;
        days_left_to_add = 0;
        }
    } 
}

int main() {
    int year, mm, dd, yy, days_left_to_add;
    
    //This is to check whether the year is leap or not
    printf("Enter Year between 1800 and 10000: ");
    scanf("%i", &year);
    if(is_leap_year(year) == true){
        printf("Leap Year\n");
    }
    else{ 
        printf("Not Leap Year\n");
    }
    
    
    printf("Enter Date between year 1800 and 10000(mm/dd/yy): ");
    scanf("%i/%i/%i + %i", &mm, &dd, &yy, &days_left_to_add);
    
    add_days_to_date(&mm, &dd, &yy, days_left_to_add);
    
    printf("%i/%i/%i\n", mm, dd, yy);
}