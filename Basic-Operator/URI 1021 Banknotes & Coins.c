#include<stdio.h>

int main ()
{
    int N1, N2, N;
    scanf ("%d.%d", &N1, &N2);
    N = (N1*100)+N2;
    printf("Notes:\n");

    printf("%d note of TK 100.00\n", N/10000);
    N = N % 10000;
    printf("%d note of TK 50.00\n", N/5000);
    N = N % 5000;
    printf("%d note of TK 20.00\n", N/2000);
    N = N % 2000;
    printf("%d note of TK 10.00\n", N/1000);
    N = N % 1000;
    printf("%d note of TK 5.00\n", N/500);
    N = N % 500;
    printf("%d note of TK 2.00\n", N/200);
    N = N % 200;

    printf("\nCoins:\n");

    printf("%d Coins of TK 1.00\n", N/100);
    N = N % 100;
    printf("%d Coins of TK 0.50\n", N/50);
    N = N % 50;
    printf("%d Coins of TK 0.25\n", N/25);
    N = N % 25;
    printf("%d Coins of TK 0.10\n", N/10);
    N = N % 10;
    printf("%d Coins of TK 0.05\n", N/5);
    N = N % 5;
    printf("%d Coins of TK 0.01\n", N/1);
    N = N % 1;

    return 0;
}

