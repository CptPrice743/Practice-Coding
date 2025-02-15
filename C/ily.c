#include<stdio.h>

int main(void){
    int month, date, year;

    //Standard date form
    printf("Enter Date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &date, &year);

    //If-else statement for printing the month
    switch (month)
    {
    case 1:
        printf("January\t");
        break;
    case 2:
        printf("February\t");
        break;
    case 3:
        printf("March\t");
        break;
    case 4:
        printf("April\t");
        break;
    case 5:
        printf("May\t");
        break;
    case 6:
        printf("June\t");
        break;
    case 7:
        printf("July\t");
        break;
    case 8:
        printf("I\t");
        break;
    case 9:
        printf("September\t");
        break;
    case 10:
        printf("October\t");
        break;
    case 11:
        printf("November\t");
        break;
    case 12:
        printf("December\t");
        break;
    default:
        printf("Invalid\t");
        break;
    }

    //If-else to print date
    switch (date)
    {
    case 1:
        printf("%dst\t", date);
        break;
    case 2:
        printf("%dnd/t", date);
        break;
    case 3:
        printf("%drd\t", date);
        break;
    case 21:
        printf("%dst\t", date);
        break;
    case 22:
         printf("%dnd\t", date);
        break;
    case 23:
        printf("%drd\t", date);
        break;
    case 31:
        printf("%dst\t", date);
        break;
    case 27:
        printf("LOVE\t");
        break;
    case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16:
    case 17: case 18: case 19: case 20: case 24: case 25: case 26:  case 28: case 29: case 30:
        printf("%dth\t", date);
        break;
    default:
        printf("invalid\t", date);
        break;
    }
    if (year = 2004){
        printf("YOU <3\n"); 
        }
    
}