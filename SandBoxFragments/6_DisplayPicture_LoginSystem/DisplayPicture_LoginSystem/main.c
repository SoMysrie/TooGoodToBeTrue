#include "header.h"

int main(int argc, char *argv[])
{
    char id[30], mdp[30];

    freopen("CON", "w", stdout);
    freopen("CON", "w", stderr);

    input("Identifiant\n", id, 30);
    input("Mot de passe\n", mdp, 30);

    if(strcmp(id, "kazutsn"))
    {
        kazutsnDesktop();
    }
    else
        printf("\n\nErreur!\n\n");

    return 0;
}
