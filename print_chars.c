/*
filename: print_chars.c
print a square of chars according to a set of rules
Coder: Elad Mor
*/

#include <stdio.h>

int main(){
    int num; //length of chars, dictates the char by its divisors.
    printf("enter the length of the square\n");
    scanf("%d", &num);
    int i; //for loop index.
    int j;// inside for loop.
    char c = '@';// character matching num divisors.
    
    c = ((num%5==0) ? '%':c);
    c = ((num%3==0) ? '^':c);
    c = ((num%2==0) ? '*':c);//i think it looks better than a bunch of ifs
    
   
    //print the square
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            
            printf("%c",c);
        }
        printf("\n");
    }
    

    
    return 0;
}