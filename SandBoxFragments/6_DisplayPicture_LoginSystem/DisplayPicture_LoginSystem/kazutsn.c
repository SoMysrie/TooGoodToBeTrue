#include "header.h"

int kazutsnDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_gyokuro.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}
