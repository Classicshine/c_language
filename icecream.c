#include<stdio.h>
int main()
 {

float price,quantity,total=0.0,discount=0.0,netbill=0.0;

printf("Enter the price of ice cream:");
scanf("%f",&price);

printf("Enter the price of quantity:");
scanf("%f",&quantity);

 total=price*quantity;
 printf("\ntotal=%f",total);

 
 discount=total*0.15;
 printf("\nDiscount=%f",discount);
 
 netbill=total-discount;
 printf("\n netbil=%f",netbill);
 
 return 0;
}
