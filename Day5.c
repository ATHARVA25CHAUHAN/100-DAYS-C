#include <stdio.h>
#include <math.h>

int main()  { 
    float P, R, T, SI, CI;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    SI = (P * R * T) / 100;
    CI = P * pow((1 + R /100), T) -P;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);
    return  0;
}
