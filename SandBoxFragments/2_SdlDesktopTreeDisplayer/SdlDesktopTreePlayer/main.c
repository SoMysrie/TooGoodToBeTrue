#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL_image.h>
#include "header.h"

int main(int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) == -1)
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); //ecriture de l'erreur
        exit(EXIT_FAILURE); //arrêt du programme
    }

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    // Si l'ouverture a échoué, on le note et on arrête
    if (ecran == NULL)
    {
        fprintf(stderr, "Impossible de charger le mode video : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    SDL_WM_SetCaption("Desktop", NULL);

    //arrêt de la SDL (libération de la mémoire).
    SDL_Quit();

    return 0;
}
