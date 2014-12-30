#include "header.h"

int kazutsnDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x          = 0;
    positionFond.y          = 0;

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

    //affichage de l'écran
    imageDeFond = SDL_LoadBMP("Resources/desktop_gyokuro.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    //mise à jour de l'écran avec sa nouvelle couleur
    SDL_Flip(ecran);
    pause();

    //arrêt de la SDL (libération de la mémoire).
    SDL_Quit();

    return 0;
}
