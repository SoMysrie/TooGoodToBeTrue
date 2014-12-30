#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "input.h"

void addId(int n);
void createId (char *family_name, char *name, char *id);
void checkFile(void);
int check(char *id, char *mdp);

int main (int argc, char **argv)
{
    char familyName[30], name[30], id[30], mdp[30];

    checkFile();

    do
    {
        input("\n\nIdentifiant\n\n", id, 30);
        input("\n\nMot de passe\n\n", mdp, 30);
        if (check(id, mdp) == 1)
        {
            printf("\n\nBienvenue!!\n\n");
        }
        else
            printf("\n\nL'identifiant ou le mot de passe est incorrect.\n\n");
    }while (check(id, mdp) == 0);

    system("cls");

    addId(1);

    checkFile();

    return 0;
}

void addId (int n)
{
    char familyName[30], name[30], identifiant[10], motDePasse[30];
    FILE *fichier;
    int i = 0;

    for(i=0; i<n; i++)
    {
        input("Quel est votre nom?\n", familyName, 30);
        input("Quel est votre prenom?\n", name, 30);
        input("Quel est votre mot de passe?\n", motDePasse, 30);

        createId(familyName, name, identifiant);
        printf("Votre identifiant est %s\n", identifiant);

        fichier = fopen("fichier_id", "ab");

        fwrite(familyName, sizeof (char), 30, fichier);
        fwrite(name, sizeof (char), 30, fichier);
        fwrite(identifiant, sizeof (char), 10, fichier);
        fwrite(motDePasse, sizeof (char), 30, fichier);
        fclose(fichier);
        printf("\nUtilisateur ajoute dans le fichier\n\n");
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
