#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageUtil = NULL, *rectangleUtil = NULL, *rectanglePassword = NULL;
    SDL_Rect positionUtil, positionRectUtil, positionRectPassword, positionTextUtil, positionTextPsw;
    TTF_Font *police = NULL;
    SDL_Color couleurNoire = {0, 0, 0};
    SDL_Event event;
    int taille_x, taille_y;
    int continuer = 1;

    positionUtil.x          = 350;
    positionUtil.y          = 150;
    positionRectUtil.x      = 350;
    positionRectUtil.y      = 300;
    positionRectPassword.x  = 350;
    positionRectPassword.y  = 350;
    positionTextUtil.x      = 350;
    positionTextUtil.y      = 150;
    positionTextPsw.x       = 350;
    positionTextPsw.y       = 300;

    taille_x                = 125;
    taille_y                = 25;


    if (SDL_Init(SDL_INIT_VIDEO) == -1)
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); //ecriture de l'erreur
        exit(EXIT_FAILURE); //arrêt du programme
    }

    ecran               = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);
    rectangleUtil       = SDL_CreateRGBSurface(SDL_HWSURFACE, taille_x, taille_y, 32, 0, 0, 0, 0);
    rectanglePassword   = SDL_CreateRGBSurface(SDL_HWSURFACE, taille_x, taille_y, 32, 0, 0, 0, 0);

    // Si l'ouverture a échoué, on le note et on arrête
    if (ecran == NULL)
    {
        fprintf(stderr, "Impossible de charger le mode video : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_WM_SetCaption("Desktop", NULL);

    //affichage des images
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));
    imageUtil = SDL_LoadBMP("Resources/util.bmp");
    SDL_SetColorKey(imageUtil, SDL_SRCCOLORKEY, SDL_MapRGB(imageUtil->format, 0, 0, 0));
    SDL_BlitSurface(imageUtil, NULL, ecran, &positionUtil);
    //affichage des espaces pour écrire
    SDL_FillRect(rectangleUtil, NULL, SDL_MapRGB(rectangleUtil->format, 255, 255, 255));
    SDL_BlitSurface(rectangleUtil, NULL, ecran, &positionRectUtil);
    SDL_FillRect(rectanglePassword, NULL, SDL_MapRGB(rectanglePassword->format, 255, 255, 0));
    SDL_BlitSurface(rectanglePassword, NULL, ecran, &positionRectPassword);

    SDL_FreeSurface(rectangleUtil);
    SDL_FreeSurface(rectanglePassword);

    //mise à jour de l'écran avec sa nouvelle couleur
    SDL_Flip(ecran);

    SDL_EnableKeyRepeat(10, 10);

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_MOUSEBUTTONDOWN:
                if(event.button.x == positionRectUtil.x || event.button.y == positionRectUtil.y)
                {
                    //pour écrire
                    if(TTF_Init() == -1)
                    {
                        fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
                        exit(EXIT_FAILURE);
                    }

                    police = TTF_OpenFont("arial.ttf", 11);
                    rectangleUtil = TTF_RenderText_Blended(police, "Utilisateur", couleurNoire);
                    SDL_BlitSurface(rectangleUtil, NULL, ecran, &positionRectUtil);

                    TTF_CloseFont(police);
                    TTF_Quit();
                }
                else if(event.button.x == positionRectPassword.x || event.button.y == positionRectPassword.y)
                {
                    //pour écrire
                    if(TTF_Init() == -1)
                    {
                        fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
                        exit(EXIT_FAILURE);
                    }

                    police = TTF_OpenFont("arial.ttf", 11);
                    rectanglePassword = TTF_RenderText_Blended(police, "Mot de passe", couleurNoire);
                    SDL_BlitSurface(rectanglePassword, NULL, ecran, &positionRectPassword);

                    TTF_CloseFont(police);
                    TTF_Quit();
                }
                break;
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP:
                        break;
                    case SDLK_DOWN:
                        break;
                    case SDLK_RIGHT:
                        break;
                    case SDLK_LEFT:
                        break;
                    case SDLK_ESCAPE:
                        continuer = 0;
                        break;
                }
                break;
        }
        SDL_Flip(ecran);
    }

    //liberation de la surface
    SDL_FreeSurface(imageUtil);
    SDL_FreeSurface(rectangleUtil);
    SDL_FreeSurface(rectanglePassword);

    //arrêt de la SDL (libération de la mémoire).
    SDL_Quit();

    return EXIT_SUCCESS;
}
