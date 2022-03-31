//write a program to calculate the simple interest

#include <stdio.h>

int main()
{
    float principle, time, rate, SI;

    /* Input principle, rate and time */
    printf("Enter the principal amount : ");
    scanf("%f", &principle);

    printf("Enter the number of years : ");
    scanf("%f", &time);

    printf("Enter the rate of interest : ");
    scanf("%f", &rate);

    /* Calculate simple interest */
    SI = (principle * time * rate) / 100;

    printf("Simple Interest = %f", SI);

    return 0;
}