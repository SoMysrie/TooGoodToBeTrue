#include "header.h"

int main(int argc, char *argv[])
{
    char id[30], mdp[30];

    freopen("CON", "w", stdout);
    freopen("CON", "w", stderr);

    checkFile();

    do
    {
        input("\n\nIdentifiant\n\n", id, 30);
        input("\n\nMot de passe\n\n", mdp, 30);
        if (check(id, mdp) == 1)
        {
            printf("\n\nBienvenue!!\n\n");
            //displayDesktop(id);

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

        }
        else
            printf("\n\nL'identifiant ou le mot de passe est incorrect.\n\n");
    }while (check(id, mdp) == 0);

    printf("ici 3!");

    return 0;
}
