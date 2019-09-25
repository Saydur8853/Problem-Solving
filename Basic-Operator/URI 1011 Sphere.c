#include<stdio.h>
#define pi 3.14159
int main ()

{

    double R, volume;

    scanf("%lf", &R);

    volume = (4.0/3) * pi * R * R * R;

    printf("Volume = %.3lf\n", volume);

    return 0;
}

