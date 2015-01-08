#include "header.h"

int main(int argc, char *argv[])
{
    char id[30], mdp[30], test[30], answerMail[100];
    int  cpt = 0, continuer = 1;
    int answerId, answerAgain, answerDrug, answerWant;

    freopen("CON", "w", stdout);
    freopen("CON", "w", stderr);

    checkFile();
    storyGame();

    do
    {
        addId(1);
        verifId(&answerId);
    }while(answerId!=1);

    do
    {
        do
        {
            input("\n\n", test, 30);
            input("\n\nIdentifiant\n\n", id, 30);
            input("\n\nMot de passe\n\n", mdp, 30);
            if (check(id, mdp) == 1)
                displayDesktop(id);
                //employeeDesktop();
            else
                printf("\n\nL'identifiant ou le mot de passe est incorrect.\n\n");
        }while (check(id, mdp) == 0);

        wantToVerifDrug(&answerWant);

        if(answerWant == 1)
        {
            verifDrug(&answerDrug);
            switch(answerDrug)
            {
                case 4:
                    happyEndGame();
                    continuer = 0;
                    break;
                default:
                    cpt++;
                    printf("\n\nMauvais medicament!\n\n");
                    printf("Vous etes a %d coups.\n\n", cpt);
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

    return 0;
}
