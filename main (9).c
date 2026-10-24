/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>

void main()
{
    
    
    float length,width,area;
    
    printf("enter the lenght of the rectangle:");
    scanf("%f",&length);
    printf("enter the width of the rectangle:");
    scanf("%f",&width);
    area = length*width;
    printf("areabof the rectangle:%.2f\n",area);

    getch();
}