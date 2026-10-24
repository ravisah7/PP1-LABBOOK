#include <stdio.h>
#include<conio.h>
int main(){
    float quantity, price, discount;
    clrscr();
    float amount, discountAmount, finalAmount;
    printf("Enter quantity: ");
    scanf("%f", &quantity);
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Enter discount percentage: ");
    scanf("%f", &discount);
    amount = quantity * price;
    discountAmount = amount * discount / 100;
    finalAmount = amount - discountAmount;
    printf("Total Amount = %.2f\n", amount);
    printf("Discount Amount = %.2f\n", discountAmount);
    printf("Final Amount = %.2f\n", finalAmount);
    getch();
}