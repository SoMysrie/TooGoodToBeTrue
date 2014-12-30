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
            case SDL_KEYDOWN:
                continuer = 0;
                break;
        }
    }
}

void testSdl()
{
    if (SDL_Init(SDL_INIT_VIDEO) == -1)
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); //ecriture de l'erreur
        exit(1); //arrêt du programme
    }
}

void testEcran(SDL_Surface *ecran)
{
    if (ecran == NULL)      // Si l'ouverture a échoué, on le note et on arrête
    {
        fprintf(stderr, "Impossible de charger le mode video : %s\n", SDL_GetError());
        exit(1);
    }
    SDL_WM_SetCaption("Desktop", NULL);
}

void clearEcran(SDL_Surface *ecran)
{

    SDL_Flip(ecran);    //mise à jour de l'écran avec sa nouvelle couleur
    pause();
    SDL_Quit();         //arrêt de la SDL (libération de la mémoire).
}

int desktopContent(SDL_Surface *ecran)
{
    SDL_Surface *imageContactList = NULL, *imageFile = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageTrashFull = NULL, *imageStop = NULL;
    SDL_Rect positionContactList, positionFile, positionFolder, positionFolderImportant, positionTrashEmpty, positionTrashFull, positionStop;

    positionTrashEmpty.x        = 30;
    positionTrashEmpty.y        = 30;
    positionTrashFull.x         = 30;
    positionTrashFull.y         = 30;
    positionContactList.x       = 30;
    positionContactList.y       = 120;
    positionFile.x              = 50;
    positionFile.y              = 210;
    positionFolder.x            = 30;
    positionFolder.y            = 300;
    positionFolderImportant.x   = 30;
    positionFolderImportant.y   = 390;
    positionStop.x              = 30;
    positionStop.y              = 500;

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

    imageStop = SDL_LoadBMP("Resources/stop.bmp");
    SDL_SetColorKey(imageStop, SDL_SRCCOLORKEY, SDL_MapRGB(imageStop->format, 0, 0, 0));
    SDL_BlitSurface(imageStop, NULL, ecran, &positionTrashFull);

    SDL_FreeSurface(imageContactList);
    SDL_FreeSurface(imageFile);
    SDL_FreeSurface(imageFolder);
    SDL_FreeSurface(imageFolderImportant);
    SDL_FreeSurface(imageTrashEmpty);
    SDL_FreeSurface(imageTrashFull);
    SDL_FreeSurface(imageStop);

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

    imageDeFond = SDL_LoadBMP("Resources/desktop.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

    desktopContent(ecran);

    clearEcran(ecran);

    return 0;
}

int displayDesktop(char id[30])
{
    if(strcmp(id, "kazutsn"))
        kazutsnDesktop();
    else if(strcmp(id, "ezzedir"))
        ezzedirDesktop();
    else if(strcmp(id, "morsesc"))
        morsescDesktop();
    else if(strcmp(id, "brinklr"))
        brinklrDesktop();
    else if(strcmp(id, "standfa"))
        standfaDesktop();
    else if(strcmp(id, "madoffb"))
        madoffbDesktop();
    else if(strcmp(id, "lacroiv"))
        lacroivDesktop();
    else if(strcmp(id, "ponzic"))
        ponzicDesktop();
    else
        printf("\n\nErreur!\n\n");

    return 0;
}
