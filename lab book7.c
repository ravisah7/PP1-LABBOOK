#include <stdio.h>
#include<conio.h>
int main(){
    float a;
    clrscr();
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Square of %f", a * a);
    printf("Cube of %f", a * a * a);
    getch();
}