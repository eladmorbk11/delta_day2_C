/*
filename: print_hanukia.c
print a hanukia with a given number of candles
Coder: Elad Mor
*/

#include <stdio.h>
#include <string.h>
#define BASE_CANDLE " #   "
int main(){
    int day; //0-8: number of desired day to print candles
    printf("enter the day's number\n");
    scanf("%d", &day);
    char candles[38] = "";
    switch (day) {
        case 8: 
            strcat(candles, BASE_CANDLE);
            day--;
        case 7: 
            strcat(candles, BASE_CANDLE);
            day--;
        case 6: 
            strcat(candles, BASE_CANDLE);
            day--;
        case 5:
            strcat(candles, BASE_CANDLE);
            day--;
        case 4:
            strcat(candles, BASE_CANDLE);
            day--;
        case 3:
            strcat(candles, BASE_CANDLE);
            day--;
        case 2:
            strcat(candles, BASE_CANDLE);
            day--;
        case 1:
            strcat(candles, BASE_CANDLE);
            
    }
    printf("%s\n",candles);
    printf("###  ###  ###  ###  ###  ###  ###  ###\n###  ###  ###  ###  ###  ###  ###  ###\n###  ###  ###  ###  ###  ###  ###  ###\n###  ###  ###  ###  ###  ###  ###  ###\n######################################\n                  ::                   \n                  ::                   \n                  ::                   \n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    
    
    return 0;
}