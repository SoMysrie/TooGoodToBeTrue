#include "header.h"

int main(int argc, char *argv[])
{
    char id[30], mdp[30], test[30];
    int  cpt = 0, continuer = 1, answerId, answerAgain, answerDrug, answerWant;

    freopen("CON", "w", stdout);
    freopen("CON", "w", stderr);

    checkFile();
    storyGame();

    do
    {
        //addId(1);
        verifId(&answerId);
    }while(answerId!=1);

    do
    {
        do
        {
            input("\n\n", test, 30);
            input("Identifiant : ", id, 30);
            input("Mot de passe : ", mdp, 30);
            if (check(id, mdp) == 1)
                displayDesktop();
            else
                printf("\n\nL'identifiant ou le mot de passe est incorrect.\n\n");
        }while (check(id, mdp) == 0);

        wantToVerifDrug(&answerWant);

        if(answerWant == 1)
        {
            verifDrug(&answerDrug);
            switch(answerDrug)
            {
                case 1:
                    happyEndGame();
                    continuer = 0;
                    break;
                default:
                    cpt++;
                    printf("\n\nMauvais medicament!\n\n");
                    printf("Vous etes a %d coups d'essais!\n\n", cpt);
                    break;
            }
        }

        if(cpt == 4)
        {
            badEndGame();
            anotherTime(&answerAgain);
            if(answerAgain == 2)
                continuer = 0;
        }
    }while(continuer != 0);

    system("PAUSE");

    return 0;
}
