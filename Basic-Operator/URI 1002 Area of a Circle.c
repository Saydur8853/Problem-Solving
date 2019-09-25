#include<stdio.h>
#define PI 3.14159265359

int main (){

    double R;
    double A;

    scanf("%lf", &R);

    A = PI*R*R;

    printf("A = %.4lf\n", A);

    return 0;


}
