#include<stdio.h>

int main()
{
    char n;
    freopen("I019 a program reads it's own code & print it .c","r", stdin);

    while (1== scanf("%c", &n))
        printf ("%c",n);

    return 0;
}
