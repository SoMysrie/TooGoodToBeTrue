#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char *phrase,char chaine[],int taille)
{
    printf("%s",phrase);
    fgets(chaine,taille,stdin);
    if(chaine[strlen(chaine)-1]=='\n')
        chaine[strlen(chaine)-1]='\0';
    fflush(stdin);
}

int inputInt(char *phrase,int *nb)
{
    int i=0;
    char chaine[30];

    input(phrase,chaine,30);
    for(i=0;i<strlen(chaine);i++)
    {
        if(chaine[i]<'0'||chaine[i]>'9')
            return 0;
    }

    *nb=atoi(chaine);
    return 1;
}
