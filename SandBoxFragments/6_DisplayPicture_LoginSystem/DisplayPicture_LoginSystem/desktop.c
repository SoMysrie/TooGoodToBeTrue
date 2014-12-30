#include "header.h"

int brinklrDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_cafe.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int ezzedirDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_agathe.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int kazutsnDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_gin.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int lacroivDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_gin.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int madoffbDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_c37g11p7t3.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int morsescDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_roses.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int ponzicDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_framboise.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int standfaDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_poker.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int employeeDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;

    positionFond.x = 0;
    positionFond.y = 0;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop_gamer.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}
