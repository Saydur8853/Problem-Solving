#include<stdio.h>

int main ()
{
    float A,B,C, Average;

    scanf("%f %f %f", &A, &B, &C);

    A = A*2;
    B = B*3;
    C = C*5;


    Average = (A+B+C)/(2+3+5);


    printf("MEDIA = %.1f\n", Average);

    return 0;

}
