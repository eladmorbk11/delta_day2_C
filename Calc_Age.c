/*
filename: Max.c
calc and prints age of user
Coder: Elad Mor
*/

#include <stdio.h>

int main(){
    int currentYear, currentMonth, currentDay;
    int birthYear, birthMonth, birthDay;
    printf("enter current date in yyyy/mm/dd format\n");
    scanf("%d/%d/%d", &currentYear, &currentMonth, &currentDay);
    printf("enter birth date in yyyy/mm/dd format\n");
    scanf("%d/%d/%d", &birthYear, &birthMonth, &birthDay);

    //calc difference in dates.
    printf("your age in yyyy/mm/dd format: \n %d/%d/%d \n",currentYear-birthYear,currentMonth-birthMonth,currentDay-birthDay);
    return 0;
}