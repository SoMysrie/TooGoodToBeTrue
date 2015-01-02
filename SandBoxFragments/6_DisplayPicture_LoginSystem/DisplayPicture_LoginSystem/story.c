#include "header.h"

int verifId(int *answer)
{
    //system("PAUSE");
    //system("cls");

    printf("\n\n");
    printf("\nAvez vous un identifiant?\n");
    printf("1. Oui.\n");
    printf("2. Non.\n");
    scanf("%d", answer);
    printf("\n\n");
}

int anotherTime(int *answer)
{
    //system("PAUSE");
    //system("cls");

    printf("\n\n");
    printf("\nVoulez vous faire une autre partie?\n");
    printf("1. Oui.\n");
    printf("2. Non.\n");
    scanf("%d", answer);
    printf("\n\n");

    //system("PAUSE");
    //system("cls");
}

int wantToVerifDrug(int *answer)
{
    printf("\n\n");
    printf("\nAvez vous trouver le medicament defectueux?\n");
    printf("1. Oui.\n");
    printf("2. Non.\n");
    scanf("%d", answer);
    printf("\n\n");
}

int verifDrug(int *answer)
{
    printf("\n\n");
    printf("\nQuel est le medicament defectueux?\n");
    printf("1. Combantrin 125mg cp.\n");
    printf("2. Josacine 125mg/5mL glé p susp buv.\n");
    printf("3. Muxol sol buv.\n");
    printf("4. Qvar Autohaler 500 micro/dose sol p inhal.\n");
    printf("5. Skaÿ 0.5% collyre.\n");
    printf("6. Telmisartan Ranbaxy 80 mg cp.\n");
    printf("7. Zolmitriptan Evolugen 2.5mg cp pellic.\n");
    scanf("%d", answer);
    printf("\n\n");
}

char verifMail(char *answer[100])
{
    printf("\n\n");
    inputInt(answer, 100);

    printf("\n\n");
}

void storyGame()
{
    printf("\n\n\n\n");
    printf("Bienvenue sur le jeu Too Good To Be True!");
    printf("\n\n\n\n");

    printf("Vous etes un employe de l'entreprise CaRe&Co.\n");
    printf("C'est une tres grande entreprise pharmaceutique,\n");
    printf("qui va sortir le mois prochain une dizaine de medicaments.\n");
    printf("\n\n\n\n");

    printf("Sauf que vous avez des doutes pour l'un de ces medicaments...");
    printf("\n\n\n\n");
    printf("Votre objectif est de decouvrir lequel est-ce.\n");
    printf("Vous trouverez lequel en cherchant parmi les fichiers et\n");
    printf("les mails de vos collegues.\n\n");
    printf("Pour cela, il sera necessaire de faire preuve de rigueur\n");
    printf("et de perseverance afin de trouver leur mot de passe et leurs secrets!");
    printf("\n\n\n\n");

    printf("Bon courage!");
}

void happyEndGame()
{
    printf("\n\n\n\n");
    printf("Bravo!!");
    printf("\n\n\n\n");
    printf("Le Qvar est bien le medicament defectueux!\n\n");
    printf("Grace a votre perseverance,\n");
    printf("vous avez sauve beaucoup de vies!");
    printf("\n\n\n\n");
}

void badEndGame()
{
    printf("\n\n\n\n");
    printf("Game Over!!");
    printf("\n\n\n\n");
}
