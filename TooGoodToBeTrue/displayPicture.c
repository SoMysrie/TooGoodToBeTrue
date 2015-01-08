#include "header.h"

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

int displayDesktop()
{
    int continuer = 1;
    SDL_Event event;

    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *imageContactList = NULL, *imageFolder = NULL, *imageFolderImportant = NULL, *imageTrashEmpty = NULL, *imageStop = NULL;
    SDL_Surface *imageFolderTrash = NULL, *imageFolderContact = NULL, *imageFolderFile = NULL, *imageFolderDrugs = NULL;
    SDL_Surface *imageBrinklr = NULL, *imageEzzedir = NULL, *imageKazutsn = NULL, *imageLacroiv = NULL, *imageMadoffb = NULL, *imageMorsec = NULL, *imagePonzic = NULL, *imageStandfa = NULL;
    SDL_Surface *imageCombantrin = NULL, *imageJosacine = NULL, *imageMuxol = NULL, *imageQvar = NULL, *imageSkay = NULL, *imageTelmisartan = NULL, *imageZolmitriptan = NULL;

    SDL_Rect positionFond, positionContactList, positionFolder, positionFolderImportant, positionTrashEmpty, positionStop;
    SDL_Rect positionFolderTrash, positionFolderContact, positionFolderFile, positionFolderDrugs;
    SDL_Rect positionBrinklr, positionEzzedir, positionKazutsn, positionLacroiv, positionMadoffb, positionMorsec, positionPonzic, positionStandfa;
    SDL_Rect positionCombantrin, positionJosacine, positionMuxol, positionQvar, positionSkay, positionTelmisartan , positionZolmitriptan;

    positionFond.x              = 0;
    positionFond.y              = 0;
    positionTrashEmpty.x        = 30;
    positionTrashEmpty.y        = 30;
    positionContactList.x       = 30;
    positionContactList.y       = 150;
    positionFolder.x            = 30;
    positionFolder.y            = 250;
    positionFolderImportant.x   = 30;
    positionFolderImportant.y   = 350;
    positionStop.x              = 0;
    positionStop.y              = 550;

    positionFolderTrash.x       = 200;
    positionFolderTrash.y       = 100;
    positionFolderContact.x     = 200;
    positionFolderContact.y     = 50;
    positionFolderFile.x        = 200;
    positionFolderFile.y        = 175;
    positionFolderDrugs.x       = 200;
    positionFolderDrugs.y       = 300;

    positionBrinklr.x           = 100;
    positionBrinklr.y           = 100;
    positionEzzedir.x           = 100;
    positionEzzedir.y           = 100;
    positionKazutsn.x           = 100;
    positionKazutsn.y           = 100;
    positionLacroiv.x           = 100;
    positionLacroiv.y           = 100;
    positionMadoffb.x           = 100;
    positionMadoffb.y           = 100;
    positionMorsec.x            = 100;
    positionMorsec.y            = 100;
    positionPonzic.x            = 100;
    positionPonzic.y            = 100;
    positionStandfa.x           = 100;
    positionStandfa.y           = 100;

    positionCombantrin.x        = 100;
    positionCombantrin.y        = 100;
    positionJosacine.x          = 100;
    positionJosacine.y          = 100;
    positionMuxol.x             = 100;
    positionMuxol.y             = 100;
    positionQvar.x              = 100;
    positionQvar.y              = 100;
    positionSkay.x              = 100;
    positionSkay.y              = 100;
    positionTelmisartan.x       = 100;
    positionTelmisartan.y       = 100;
    positionZolmitriptan.x      = 100;
    positionZolmitriptan.y      = 100;

    testSdl();

    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_FULLSCREEN | SDL_DOUBLEBUF);

    testEcran(ecran);

    imageDeFond = SDL_LoadBMP("Resources/desktop.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);

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

    imageStop = SDL_LoadBMP("Resources/stop.bmp");
    SDL_BlitSurface(imageStop, NULL, ecran, &positionStop);

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_MOUSEBUTTONDOWN:
                //bouton stop
                if(0<event.button.x && 55>event.button.x && 550<event.button.y && 650>event.button.y)
                    continuer = 0;
                //bouton poubelle
                if(30<event.button.x && 95>event.button.x && 30<event.button.y && 95>event.button.y)
                {
                    imageFolderTrash = SDL_LoadBMP("Resources/trash_files.bmp");
                    SDL_BlitSurface(imageFolderTrash, NULL, ecran, &positionFolderTrash);
                }
                //bouton contact
                if(30<event.button.x && 95>event.button.x && 190<event.button.y && 240>event.button.y)
                {
                    imageFolderContact = SDL_LoadBMP("Resources/contact_files.bmp");
                    SDL_BlitSurface(imageFolderContact, NULL, ecran, &positionFolderContact);
                }
                //bouton dossier
                if(30<event.button.x && 95>event.button.x && 290<event.button.y && 340>event.button.y)
                {
                    imageFolderFile = SDL_LoadBMP("Resources/multiple_files.bmp");
                    SDL_BlitSurface(imageFolderFile, NULL, ecran, &positionFolderFile);
                }
                //bouton dossier important
                if(30<event.button.x && 95>event.button.x && 390<event.button.y && 440>event.button.y)
                {
                    imageFolderDrugs = SDL_LoadBMP("Resources/drug_files.bmp");
                    SDL_BlitSurface(imageFolderDrugs, NULL, ecran, &positionFolderDrugs);
                }

                //contacts
                if(210<event.button.x && 260>event.button.x && 55<event.button.y && 105>event.button.y)
                {
                    imageKazutsn = SDL_LoadBMP("Resources/kazutsn.bmp");
                    SDL_BlitSurface(imageKazutsn, NULL, ecran, &positionKazutsn);
                }
                if(210<event.button.x && 260>event.button.x && 135<event.button.y && 185>event.button.y)
                {
                    imageEzzedir = SDL_LoadBMP("Resources/ezzedir.bmp");
                    SDL_BlitSurface(imageEzzedir, NULL, ecran, &positionEzzedir);
                }
                if(210<event.button.x && 260>event.button.x && 225<event.button.y && 275>event.button.y)
                {
                    imageMorsec = SDL_LoadBMP("Resources/morsesc.bmp");
                    SDL_BlitSurface(imageMorsec, NULL, ecran, &positionMorsec);
                }
                if(360<event.button.x && 410>event.button.x && 55<event.button.y && 105>event.button.y)
                {
                    imageBrinklr = SDL_LoadBMP("Resources/brinklr.bmp");
                    SDL_BlitSurface(imageBrinklr, NULL, ecran, &positionBrinklr);
                }
                if(360<event.button.x && 410>event.button.x && 135<event.button.y && 185>event.button.y)
                {
                    imageStandfa = SDL_LoadBMP("Resources/standfa.bmp");
                    SDL_BlitSurface(imageStandfa, NULL, ecran, &positionStandfa);
                }
                if(360<event.button.x && 410>event.button.x && 205<event.button.y && 255>event.button.y)
                {
                    imageMadoffb = SDL_LoadBMP("Resources/madoffb.bmp");
                    SDL_BlitSurface(imageMadoffb, NULL, ecran, &positionMadoffb);
                }
                if(530<event.button.x && 580>event.button.x && 55<event.button.y && 105>event.button.y)
                {
                    imageLacroiv = SDL_LoadBMP("Resources/lacroiv.bmp");
                    SDL_BlitSurface(imageLacroiv, NULL, ecran, &positionLacroiv);
                }
                if(530<event.button.x && 580>event.button.x && 135<event.button.y && 185>event.button.y)
                {
                    imagePonzic= SDL_LoadBMP("Resources/ponzic.bmp");
                    SDL_BlitSurface(imagePonzic, NULL, ecran, &positionPonzic);
                }
                //médicaments
                if(210<event.button.x && 260>event.button.x && 310<event.button.y && 360>event.button.y)
                {
                    imageCombantrin = SDL_LoadBMP("Resources/combantrin.bmp");
                    SDL_BlitSurface(imageCombantrin, NULL, ecran, &positionCombantrin);
                }
                if(210<event.button.x && 260>event.button.x && 380<event.button.y && 430>event.button.y)
                {
                    imageJosacine = SDL_LoadBMP("Resources/josacine.bmp");
                    SDL_BlitSurface(imageJosacine, NULL, ecran, &positionJosacine);
                }
                if(210<event.button.x && 260>event.button.x && 460<event.button.y && 510>event.button.y)
                {
                    imageMuxol = SDL_LoadBMP("Resources/muxol.bmp");
                    SDL_BlitSurface(imageMuxol, NULL, ecran, &positionMuxol);
                }
                if(360<event.button.x && 410>event.button.x && 310<event.button.y && 360>event.button.y)
                {
                    imageSkay = SDL_LoadBMP("Resources/skay.bmp");
                    SDL_BlitSurface(imageSkay, NULL, ecran, &positionSkay);
                }
                if(360<event.button.x && 410>event.button.x && 380<event.button.y && 430>event.button.y)
                {
                    imageQvar = SDL_LoadBMP("Resources/qvar.bmp");
                    SDL_BlitSurface(imageQvar, NULL, ecran, &positionQvar);
                }
                if(360<event.button.x && 410>event.button.x && 460<event.button.y && 510>event.button.y)
                {
                    imageTelmisartan = SDL_LoadBMP("Resources/telmisartan.bmp");
                    SDL_BlitSurface(imageTelmisartan, NULL, ecran, &positionTelmisartan);
                }
                if(530<event.button.x && 580>event.button.x && 310<event.button.y && 360>event.button.y)
                {
                    imageZolmitriptan = SDL_LoadBMP("Resources/zolmitriptan.bmp");
                    SDL_BlitSurface(imageZolmitriptan, NULL, ecran, &positionZolmitriptan);
                }
                break;
        }
        SDL_Flip(ecran);    //mise à jour de l'écran avec sa nouvelle couleur
    }

    SDL_FreeSurface(imageContactList);
    SDL_FreeSurface(imageFolder);
    SDL_FreeSurface(imageFolderImportant);
    SDL_FreeSurface(imageTrashEmpty);
    SDL_FreeSurface(imageStop);

    SDL_FreeSurface(imageFolderTrash);
    SDL_FreeSurface(imageFolderContact);
    SDL_FreeSurface(imageFolderFile);
    SDL_FreeSurface(imageFolderDrugs);

    SDL_FreeSurface(imageBrinklr);
    SDL_FreeSurface(imageEzzedir);
    SDL_FreeSurface(imageKazutsn);
    SDL_FreeSurface(imageLacroiv);
    SDL_FreeSurface(imageMadoffb);
    SDL_FreeSurface(imageMorsec);
    SDL_FreeSurface(imagePonzic);
    SDL_FreeSurface(imageStandfa);

    SDL_FreeSurface(imageCombantrin);
    SDL_FreeSurface(imageJosacine);
    SDL_FreeSurface(imageMuxol);
    SDL_FreeSurface(imageQvar);
    SDL_FreeSurface(imageSkay);
    SDL_FreeSurface(imageTelmisartan);
    SDL_FreeSurface(imageZolmitriptan);

    SDL_Quit();         //arrêt de la SDL (libération de la mémoire).

    return 0;
}
