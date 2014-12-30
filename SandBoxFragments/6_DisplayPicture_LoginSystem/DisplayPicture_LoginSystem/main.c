#include "header.h"

int main(int argc, char *argv[])
{
    char id[30], mdp[30];

    freopen("CON", "w", stdout);
    freopen("CON", "w", stderr);

    input("Identifiant\n", id, 30);
    //input("Mot de passe\n", mdp, 30);

    if(strcmp(id, "brinklr"))
    {
        brinklrDesktop();
    }
    else if(strcmp(id, "ezzedir"))
    {
        ezzedirDesktop();
    }
    else if(strcmp(id, "kazutsn"))
    {
        kazutsnDesktop();
    }
    else if(strcmp(id, "lacroiv"))
    {
        lacroivDesktop();
    }
    else if(strcmp(id, "madoffb"))
    {
        madoffbDesktop();
    }
    else if(strcmp(id, "morsec"))
    {
        morsecDesktop();
    }
    else if(strcmp(id, "ponzic"))
    {
        ponzicDesktop();
    }
    else if(strcmp(id, "standfa"))
    {
        standfaDesktop();
    }
    else
        printf("\n\nErreur!\n\n");

    return 0;
}
