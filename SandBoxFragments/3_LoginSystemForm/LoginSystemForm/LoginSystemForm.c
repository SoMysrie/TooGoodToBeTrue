#include "header.h"

void pause()
{
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
};

/*
void display()
{

};

int checkPassword(int passwordBoolean)
{
    int passwordBoolean = 1;
    int i;
    char* password = NULL;
    char trial[10];

    fgets(trial, 10, stdin);
    fflush(stdin);
    trial[strlen(trial)-1] = '\0';

    if(strcmp(password, trial) == 0){
        passwordBoolean = 0;
        break;
    }

    if (passwordBoolean == 0){
        printf("Bienvenue\n");
    }
    else{
        printf("Erreur\n");
    }

    return passwordBoolean;
};

int checkUtil()
{

};
*/
