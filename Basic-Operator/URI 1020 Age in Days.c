#include<stdio.h>

int main ()
{
    int age, years, months, days;
    scanf ("%d", &age);

    years =  age/365;
    months = (age%365)/30;
    days = (age%365)%30;


    printf("%d Year:", years);
    printf("%d Month:", months);
    printf("%d Day:", days);

    return 0;
}

