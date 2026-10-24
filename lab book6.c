#include <stdio.h>
#include <conio.h>
int main(){
    float n1, n2, n3, average;
    clrscr();
    printf("Enter the number n1: ");
    scanf("%f", &n1);
    printf("Enter the number n2: ");
    scanf("%f", &n2);
    printf("Enter the number n3: ");
    scanf("%f", &n3);
    average = (n1 + n2 + n3) / 3;
    printf("Average: %.2f\n", average);
    getch();
}