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
/*
int displayPicture(SDL_Surface *ecran, SDL_Surface *image, int x, int y)
{
    SDL_Rect position;

    position.x;
    position.y;

    SDL_SetColorKey(image, SDL_SRCCOLORKEY, SDL_MapRGB(image->format, 0, 0, 0));
    SDL_BlitSurface(image, NULL, ecran, &position);

    SDL_FreeSurface(image);

    return 0;
}

int desktopContent2(SDL_Surface *ecran)
{
    SDL_Surface *imageContactList = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageTrashFull = NULL, *imageStop = NULL;

    imageTrashEmpty = SDL_LoadBMP("Resources/trash_empty.bmp");
    displayPicture(ecran, imageTrashEmpty, 30, 30);

    imageTrashFull = SDL_LoadBMP("Resources/trash_full.bmp");
    displayPicture(ecran, imageTrashFull, 30, 30);

    imageContactList = SDL_LoadBMP("Resources/contact_list.bmp");
    displayPicture(ecran, imageContactList, 30, 150);

    imageFolder = SDL_LoadBMP("Resources/folder.bmp");
    displayPicture(ecran, imageFolder, 30, 250);

    imageFolderImportant = SDL_LoadBMP("Resources/folder_important.bmp");
    displayPicture(ecran, imageFolderImportant, 30, 350);

    imageStop = SDL_LoadBMP("Resources/stop.bmp");
    displayPicture(ecran, imageStop, 55, 500);

    return 0;
}
*/
int desktopContent(SDL_Surface *ecran)
{
    SDL_Surface *imageContactList = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageTrashFull = NULL, *imageStop = NULL;
    SDL_Rect positionContactList, positionFolder, positionFolderImportant, positionTrashEmpty, positionTrashFull, positionStop;

    positionTrashEmpty.x        = 30;
    positionTrashEmpty.y        = 30;
    positionTrashFull.x         = 30;
    positionTrashFull.y         = 30;
    positionContactList.x       = 30;
    positionContactList.y       = 150;
    positionFolder.x            = 30;
    positionFolder.y            = 250;
    positionFolderImportant.x   = 30;
    positionFolderImportant.y   = 350;
    positionStop.x              = 55;
    positionStop.y              = 500;

    imageContactList = SDL_LoadBMP("Resources/contact_list.bmp");
    SDL_SetColorKey(imageContactList, SDL_SRCCOLORKEY, SDL_MapRGB(imageContactList->format, 0, 0, 0));
    SDL_BlitSurface(imageContactList, NULL, ecran, &positionContactList);

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
    SDL_BlitSurface(imageStop, NULL, ecran, &positionStop);

    SDL_FreeSurface(imageContactList);
    SDL_FreeSurface(imageFolder);
    SDL_FreeSurface(imageFolderImportant);
    SDL_FreeSurface(imageTrashEmpty);
    SDL_FreeSurface(imageTrashFull);
    SDL_FreeSurface(imageStop);

    return 0;
}

int contactList(SDL_Surface *ecran)
{
    SDL_Surface *imageFolder = NULL;
    SDL_Rect positionFolder;

    positionFolder.x = 100;
    positionFolder.y = 200;

    imageFolder = SDL_LoadBMP("Resources/folder_contact.bmp");
    SDL_BlitSurface(imageFolder, NULL, ecran, &positionFolder);

    SDL_FreeSurface(imageFolder);

    return 0;
}

int folder(SDL_Surface *ecran)
{
    SDL_Surface *imageFolder = NULL;
    SDL_Rect positionFolder;

    positionFolder.x = 100;
    positionFolder.y = 200;

    imageFolder = SDL_LoadBMP("Resources/folder.bmp");
    SDL_BlitSurface(imageFolder, NULL, ecran, &positionFolder);

    SDL_FreeSurface(imageFolder);

    return 0;
}

int folderImportant(SDL_Surface *ecran)
{
    SDL_Surface *imageFolder = NULL;
    SDL_Rect positionFolder;

    positionFolder.x = 100;
    positionFolder.y = 200;

    imageFolder = SDL_LoadBMP("Resources/folder_drugs.bmp");
    SDL_BlitSurface(imageFolder, NULL, ecran, &positionFolder);

    SDL_FreeSurface(imageFolder);

    return 0;
}

int stop(SDL_Surface *ecran)
{

    return 0;
}

int verifWhere(SDL_Surface *ecran)
{
    int continuer = 1;
    SDL_Rect where;

    SDL_Event event;

    while(continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_MOUSEBUTTONDOWN:
                switch(where)
                {
                    case :
                        contactList(ecran);
                        break;
                    case :
                        folder(ecran);
                        break;
                    case :
                        folderImportant(ecran);
                        break;
                    case :
                        stop(ecran);
                        break;
                }
                break;
        }
    }

    return 0;
}
*/
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
        employeeDesktop();

    return 0;
}
