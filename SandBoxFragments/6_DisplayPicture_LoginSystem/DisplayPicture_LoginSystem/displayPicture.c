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
        }
    }
};
/*
int displayDesktop(char id)
{
    if(strcmp(id, "kazutsn"))
    {
        kazutsnDesktop();
    }
    else if(strcmp(id, "ezzedir"))
    {
        ezzedirDesktop();
    }
    else if(strcmp(id, "morsesc"))
    {
        morsescDesktop();
    }
    if(strcmp(id, "brinklr"))
    {
        brinklrDesktop();
    }
    else if(strcmp(id, "standfa"))
    {
        standfaDesktop();
    }
    else if(strcmp(id, "madoffb"))
    {
        madoffbDesktop();
    }
    else if(strcmp(id, "lacroiv"))
    {
        lacroivDesktop();
    }
    else if(strcmp(id, "ponzic"))
    {
        ponzicDesktop();
    }
    else
        printf("\n\nErreur!\n\n");

    return 0;
}
*/
/*
int desktopContent(SDL_Surface ecran)
{
    SDL_Surface *imageContactList = NULL, *imageFile = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageTrashFull = NULL;
    SDL_Rect positionContactList, positionFile, positionFolder, positionFolderImportant, positionTrashEmpty, positionTrashFull;

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
*/
