#include "header.h"

int brinklrDesktop()
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *imageContactList = NULL, *imageFile = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageTrashFull = NULL;
    SDL_Rect positionFond, positionContactList, positionFile, positionFolder, positionFolderImportant, positionTrashEmpty, positionTrashFull;

    positionFond.x          = 0;
    positionFond.y          = 0;
    positionTrashEmpty.x    = 30;
    positionTrashEmpty.y    = 30;
    positionTrashFull.x     = 30;
    positionTrashFull.y     = 30;
    positionContactList.x   = 30;
    positionContactList.y   = 120;
    positionFile.x          = 50;
    positionFile.y          = 210;
    positionFolder.x        = 30;
    positionFolder.y        = 300;
    positionFolderImportant.x = 30;
    positionFolderImportant.y = 390;


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

    //affichage des images
    imageDeFond = SDL_LoadBMP("Resources/desktop.bmp");
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
    //imageFolderImportant = IMG_Load("Resources/folder_important.bmp");
    SDL_SetColorKey(imageFolderImportant, SDL_SRCCOLORKEY, SDL_MapRGB(imageFolderImportant->format, 0, 0, 0));
    SDL_BlitSurface(imageFolderImportant, NULL, ecran, &positionFolderImportant);

    imageTrashEmpty = SDL_LoadBMP("Resources/trash_empty.bmp");
    SDL_SetColorKey(imageTrashEmpty, SDL_SRCCOLORKEY, SDL_MapRGB(imageTrashEmpty->format, 0, 0, 0));
    SDL_BlitSurface(imageTrashEmpty, NULL, ecran, &positionTrashEmpty);

    imageTrashFull = SDL_LoadBMP("Resources/trash_full.bmp");
    SDL_SetColorKey(imageTrashFull, SDL_SRCCOLORKEY, SDL_MapRGB(imageTrashFull->format, 0, 0, 0));
    SDL_BlitSurface(imageTrashFull, NULL, ecran, &positionTrashFull);

    //mise à jour de l'écran avec sa nouvelle couleur
    SDL_Flip(ecran);
    pause();

    //liberation de la surface
    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(imageContactList);
    SDL_FreeSurface(imageFile);
    SDL_FreeSurface(imageFolder);
    SDL_FreeSurface(imageFolderImportant);
    SDL_FreeSurface(imageTrashEmpty);
    SDL_FreeSurface(imageTrashFull);

    //arrêt de la SDL (libération de la mémoire).
    SDL_Quit();

    return 0;
}
