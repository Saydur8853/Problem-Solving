#include <stdio.h>
#define pi 3.14159

int main ()

{
    float A,B,C, Area;

    scanf("%f %f %f", &A, &B, &C);

    Area = A*C/2;
    printf("TRIANGULO: %.3f\n", Area);

    Area = pi*C*C;
    printf("CIRCULO: %.3f\n", Area);

    Area = (A+B)*C/2;
    printf("TRAPEZIO: %.3f\n", Area);

    Area = B*B;
    printf("QUADRADO: %.3f\n", Area);

    Area = A*B;
    printf("RETANGULO: %.3f\n", Area);

    return 0;



}
