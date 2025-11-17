/*
filename: calc_age.c
calc and prints age of user
Coder: Elad Mor
*/

#include <stdio.h>

int main(){
    int current_year, current_month , current_day;
    int  birth_day, birth_month,  birth_year;
    printf("enter current date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d", &current_day, &current_month, &current_year);
    printf("enter birth date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);

    //calc difference in days.
    int day_diff= 365*(current_year-birth_year)+30*(current_month-birth_month)+(current_day-birth_day);

    printf("Gary's age in days %d\nGary's age in months %lf\nGary's age in years %lf\n",day_diff,(double)day_diff/30, (double)day_diff/365);
    
    return 0;
}