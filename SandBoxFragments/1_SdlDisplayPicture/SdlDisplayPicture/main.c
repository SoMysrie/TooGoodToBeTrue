#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL_image.h>
#include "header.h"

int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *imageContactList = NULL, *imageFile = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageTrashFull = NULL;
    SDL_Rect positionFond, positionContactList, positionFile, positionFolder, positionFolderImportant, positionTrashEmpty, positionTrashFull;

    positionFond.x          = 0;
    positionFond.y          = 0;
    positionTrashEmpty.x    = 25;
    positionTrashEmpty.y    = 25;
    positionTrashFull.x     = 25;
    positionTrashFull.y     = 25;
    positionContactList.x   = 25;
    positionContactList.y   = 150;
    positionFile.x          = 25;
    positionFile.y          = 300;
    positionFolder.x        = 75;
    positionFolder.y        = 25;
    positionFolderImportant.x = 75;
    positionFolderImportant.y = 75;


    if (SDL_Init(SDL_INIT_VIDEO) == -1) // Démarrage de la SDL. Si erreur :
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); // Écriture de l'erreur
        exit(EXIT_FAILURE); // On quitte le programme
    }

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);
    if (ecran == NULL) // Si l'ouverture a échoué, on le note et on arrête
    {
        fprintf(stderr, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }
    SDL_WM_SetCaption("Desktop", NULL);

    //imageDeFond = IMG_Load("Resources/desktop.png");
    imageDeFond = SDL_LoadBMP("Resources/desktop2.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    imageContactList = SDL_LoadBMP("Resources/contact_list.bmp");
    SDL_SetColorKey(imageContactList, SDL_SRCCOLORKEY, SDL_MapRGB(imageContactList->format, 0, 0, 0));
    SDL_BlitSurface(imageContactList, NULL, ecran, &positionContactList);

    imageFile = SDL_LoadBMP("Resources/file.bmp");
    SDL_SetColorKey(imageFile, SDL_SRCCOLORKEY, SDL_MapRGB(imageFile->format, 0, 0, 0));
    SDL_BlitSurface(imageFile, NULL, ecran, &positionFile);

    imageFolder = SDL_LoadBMP("Resources/folder.bmp");
    SDL_SetColorKey(imageFolder, SDL_SRCCOLORKEY, SDL_MapRGB(imageFolder->format, 0, 0, 0));
    SDL_BlitSurface(imageFolder, NULL, ecran, &positionFolder);

    imageFolderImportant = SDL_LoadBMP("Resources/folder_important.bmp");
    SDL_SetColorKey(imageFolderImportant, SDL_SRCCOLORKEY, SDL_MapRGB(imageFolderImportant->format, 0, 0, 0));
    SDL_BlitSurface(imageFolderImportant, NULL, ecran, &positionFolderImportant);

    imageTrashEmpty = SDL_LoadBMP("Resources/trash_empty.bmp");
    SDL_SetColorKey(imageTrashEmpty, SDL_SRCCOLORKEY, SDL_MapRGB(imageTrashEmpty->format, 0, 0, 0));
    SDL_BlitSurface(imageTrashEmpty, NULL, ecran, &positionTrashEmpty);

    imageTrashFull = SDL_LoadBMP("Resources/trash_full.bmp");
    SDL_SetColorKey(imageTrashFull, SDL_SRCCOLORKEY, SDL_MapRGB(imageTrashFull->format, 0, 0, 0));
    SDL_BlitSurface(imageTrashFull, NULL, ecran, &positionTrashFull);

    SDL_Flip(ecran); /* Mise à jour de l'écran avec sa nouvelle couleur */
    pause();

    SDL_FreeSurface(imageDeFond); /* On libère la surface */
    SDL_FreeSurface(imageContactList);
    SDL_FreeSurface(imageFile);
    SDL_FreeSurface(imageFolder);
    SDL_FreeSurface(imageFolderImportant);
    SDL_FreeSurface(imageTrashEmpty);
    SDL_FreeSurface(imageTrashFull);
    SDL_Quit(); // Arrêt de la SDL (libération de la mémoire).

    return 0;
}
