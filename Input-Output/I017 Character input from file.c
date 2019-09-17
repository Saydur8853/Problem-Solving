#include<stdio.h>

int main()
{
    char n;
    freopen ("input.txt", "r",stdin);

    while (1 == scanf ("%c",&n))
        printf("%c",n);

    return 0;
}
