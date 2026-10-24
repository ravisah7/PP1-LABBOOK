#include <stdio.h>
#include<conio.h>
int main(){
    int a, b, temp;
    clrscr();
    printf("Enter the number: ");
    scanf("%d”,&a);
    printf(“\n Enter the number:”);
    scanf(“ %d”,b );
    printf("\nBefore interchange: a = %d", a);
    printf("\nBefore interchange: a = %d”, b);
    temp = a;
    a = b;
    b = temp;
    printf("After interchange: a = %d”, a);
    printf("After interchange: a = %d”, b);
    getch();
}