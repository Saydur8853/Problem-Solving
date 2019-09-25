#include<stdio.h>

int main ()
{
    // ONE RULE
    /*int time;
    scanf ("%d", &time);
    printf("%d: %d: %d\n", time/3600, (time % 3600)/ 60, time % 60);
    */


    //2nd rule

    int time, hour, min, second;

    scanf ("%d", &time);
    hour = time/3600;
    min = (time%3600)/60;
    second = time % 60;
    printf("%d: %d: %d\n", hour, min, second);

    return 0;
}
