/*
filename: calc_price.c
calc and prints price of notebooks
Coder: Elad Mor
*/

#include <stdio.h>
#define SHIPPING_FEE 5.5
#define PRICE_FOR_KG 11
#define PRICE_FOR_CM2 0.03
#define PRICE_FOR_CM2_BY_KG 0.01
int main(){
    int length, width, weight; //handed values of notebook package
    double size, weight_kg, price; //calculated balues of the package
    printf("enter the following values of the notebook package, spaced by ' ': length, width, weight");
    scanf("%d %d %d", &length, &width, &weight);
    size = (double)length*width /100 ;
    weight_kg = (double) weight/1000;
    price = SHIPPING_FEE+PRICE_FOR_KG*weight_kg+PRICE_FOR_CM2*size + PRICE_FOR_CM2_BY_KG * (size/weight);

    printf("size: %.2f\nweight: %.3f\nprice: %.2f",size,weight_kg,price);
    

    
    
    return 0;
}