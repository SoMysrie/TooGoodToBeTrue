#include "header.h"

void addId (int n)
{
    char familyName[30], name[30], identifiant[10], motDePasse[30];
    FILE *fichier;
    int i = 0;

    for(i=0; i<n; i++)
    {
        input("\n\nQuel est votre nom?\n\n", familyName, 30);
        input("\n\nQuel est votre prenom?\n\n", name, 30);
        input("\n\nQuel est votre mot de passe?\n\n", motDePasse, 30);

        createId(familyName, name, identifiant);
        printf("\n\nVotre identifiant est %s.\n\n", identifiant);

        fichier = fopen("fichier_id", "ab");

        fwrite(familyName, sizeof (char), 30, fichier);
        fwrite(name, sizeof (char), 30, fichier);
        fwrite(identifiant, sizeof (char), 10, fichier);
        fwrite(motDePasse, sizeof (char), 30, fichier);
        fclose(fichier);
        printf("\n\nUtilisateur ajoute dans le fichier.\n\n");
    }
}

void createId (char *familyName, char *name, char *id)
{
    int i=0;

    strncpy(id, familyName, 6);
    id[6]='\0';
    strncat(id, name, 1);

    for (i=0; i<strlen(id); i++)
    {
        if(id[i]>='A' && id[i]<='Z')
            id[i]=id[i]+32;
    }
}

void checkFile(void)
{
    FILE *fichier;
    char affiche[50];
    int i = 1;

    fichier = fopen("fichier_id", "rb");

    while(fread(affiche, sizeof (char), 30, fichier), !feof(fichier))
    {
        printf("\n\n");
        printf("Nom du %d utlisateur: %s || ", i, affiche);
        fread(affiche, sizeof(char), 30, fichier);
        printf("Prenom: %s || ", affiche);
        fread(affiche, sizeof(char), 10, fichier);
        printf("Identifiant: %s || ", affiche);
        fread(affiche, sizeof(char), 30, fichier);
        printf("Mot de passe: %s || ", affiche);
        printf("\n\n");
        i++;
    }
    fclose(fichier);
}

int check(char *id, char *mdp)
{
    FILE *fichier;
    char affiche[50];
    int i = 1, checkId = 0, checkMdp = 0;

    fichier = fopen("fichier_id", "rb");

    fseek(fichier, 60, SEEK_SET);       //pour se positionner sur l'id
    while(fread(affiche, sizeof (char), 10, fichier), !feof(fichier))
    {
        if(strcmp(id, affiche)==0)
        {
            checkId = 1;
            break;
        }
        fseek(fichier, 100-10, SEEK_CUR);  //pour passer au prochain mot de passe
    }

    fseek(fichier, 70, SEEK_SET);       //pour se positionner sur l'id
    if(checkId == 1)
    {
        while(fread(affiche, sizeof (char), 30, fichier), !feof(fichier))
        {
            if(strcmp(mdp, affiche)==0)
            {
                checkMdp = 1;
                break;
            }
            fseek(fichier, 100-30, SEEK_CUR);  //pour passer au prochain mot de passe
        }
    }

    fclose(fichier);

    if (checkId == 0 || checkMdp == 0)
    {
        return 0;
    }

    return 1;
}
