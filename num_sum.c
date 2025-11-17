/*
filename: num_sum.c
Description: get a series of numbers and check if sum of last and first numbers is dqual to sum of all others.
Coder: Elad Mor

*/

#include <stdio.h>

int main(){
    int num;
    int first;
    int last;
    int sum=0;
    printf("enter numbers");
    int bl = scanf(" %d ",&num);
    first = num;
    while(bl) { //canf returns the number of matches it got- so we treat it as boolean- int here.
        
        sum += num;
        last= num;
        bl = scanf(" %d ",&num);

    }
    
   
    switch(sum==2*(last+first)){
        case 1:
            printf("The sum is equal\n");
            break;
        case 0:
            printf("The sum is not equal");
            break;
    }




    return 0;
}