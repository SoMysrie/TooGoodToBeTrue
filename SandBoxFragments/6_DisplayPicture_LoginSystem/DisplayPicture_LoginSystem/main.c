#include "header.h"

int main(int argc, char *argv[])
{
    char id[30], mdp[30];
    int answerId, answerAgain, answerDrug, cpt = 0;

    freopen("CON", "w", stdout);
    freopen("CON", "w", stderr);

    do
    {
        checkFile();

        storyGame();

        do
        {
            //addId(1);
            verifId(&answerId);
        }while(answerId!=1);

        do
        {
            input("\n\nIdentifiant\n\n", id, 30);
            input("\n\nMot de passe\n\n", mdp, 30);
            if (check(id, mdp) == 1)
                displayDesktop(id);
                //employeeDesktop();
            else
                printf("\n\nL'identifiant ou le mot de passe est incorrect.\n\n");
        }while (check(id, mdp) == 0);

        verifDrug(&answerDrug);

        switch(answerDrug)
        {
            case 4:
                happyEndGame();
                return 0;
                break;
            default:
                cpt++;
                printf("\n\nMauvais medicament!\n\n");
                printf("Vous etes a %d coups.\n\n", cpt);
                break;
        }

        badEndGame(answerAgain);
    }while(answerAgain!=2);


    return 0;
}
