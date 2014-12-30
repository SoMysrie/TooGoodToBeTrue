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
            displayDesktop(id);
        else
            printf("\n\nL'identifiant ou le mot de passe est incorrect.\n\n");
    }while (check(id, mdp) == 0);

    return 0;
}
