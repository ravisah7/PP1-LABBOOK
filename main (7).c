
#include <stdio.h>

int main() {
    float principal, rate, years, simple_interest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%f", &years);

    simple_interest = (principal * rate * years) / 100;

    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}

