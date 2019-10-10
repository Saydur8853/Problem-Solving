#include <stdio.h>
#include <string.h>

int main()
{
    char st1[15], st2[15], st3[15];
    scanf("%s %s %s",st1,st2,st3);

    if (strcmp(st1, "vertebrado") == 0){

        if(strcmp(st2, "awe") == 0){
            if(strcmp(st3, "carnivoro") == 0)
                printf("aguia\n");

            else
                printf("pomba\n");
        }
        else
        {
            if (strcmp(st3, "onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");

        }
    }
    else
    {
        if(strcmp(st2, "inseto") == 0){
            if(strcmp(st3, "hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");

        }
        else
        {
            if(strcmp(st3, "hematofago") == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }

    return 0;
}
