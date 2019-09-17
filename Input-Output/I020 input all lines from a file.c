#include<stdio.h>

int main()
{
    char line[100];
    freopen("I020 input all lines from a file.c","r", stdin);

    while (gets(line))
        printf ("%s\n",line );

    return 0;
}
