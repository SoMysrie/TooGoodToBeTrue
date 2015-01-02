#include "header.h"

int drugCombantrin(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/combantrin.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int drugJosacine(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/josacine.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int drugMuxol(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/muxol.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int drugQvar(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/qvar.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int drugSkay(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/skay.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int drugTelmisatran(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/telmisatran.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int drugZolmitriptan(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/zolmitriptan.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}
