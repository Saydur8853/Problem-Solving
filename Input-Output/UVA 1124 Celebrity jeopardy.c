#include<stdio.h>

int main()
{
    char input [100];
    freopen("input.txt","r", stdin);

    while (gets(input))
        printf ("%s\n",input );

    return 0;
}

