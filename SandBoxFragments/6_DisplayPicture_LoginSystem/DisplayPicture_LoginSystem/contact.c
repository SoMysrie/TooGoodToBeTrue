#include "header.h"

int contactBrinklr(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/brinklr.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactEzzedir(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/ezzedir.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactKazutsn(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/kazutsn.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactLacroiv(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/lacroiv.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactMadoffb(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/madoffb.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactMorsesc(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/morsesc.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactPonzic(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/ponzic.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int contactStandfa(SDL_Surface *ecran)
{
    SDL_Surface *image = NULL;
    SDL_Rect position;

    position.x  = 100;
    position.y  = 200;

    image = SDL_LoadBMP("Resources/standfa.bmp");
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}
