/*
filename: Max.c
prints the max of x,y
Coder: Elad
*/

#include <stdio.h>

int main(){
    int x = 0;
    int y= 1;
    int z = (x >= y) * x + (y > x) * y ;
    printf("max is %d",z);
    return 0;
}