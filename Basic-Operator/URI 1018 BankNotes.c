#include<stdio.h>

int main ()

{
    int N;

    scanf ("%d", &N);
    printf ("%d\n", N);

    printf ("%d note of TK 100,00\n", N/100);
    N = N%100;

    printf ("%d note of TK 50,00\n", N/50);
     N = N%50;

    printf ("%d note of TK 20,00\n", N/20);
     N = N%20;

    printf ("%d note of TK 10,00\n", N/10);
     N = N%10;

    printf ("%d note of TK 5,00\n", N/5);
     N = N%5;

    printf ("%d note of TK 2,00\n", N/2);
     N = N%2;

    printf ("%d note of TK 1,00\n", N/1);
     N = N%1;

    return 0;



}
