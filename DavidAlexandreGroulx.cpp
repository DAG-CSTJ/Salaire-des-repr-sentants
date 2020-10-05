// But: Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
//L�utilisateur a un maximum de 5 chances.Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
//100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
//*nombre.

// Auteur: David-Alexandre Groulx
// Date: 2020-10-04


#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    // D�claration des variables
    int iRandom;
    int votreNombre;

    // G�n�ration du nombre al�atoire

    srand(time(0));

    // On demande � l'utilisateur d'entrer son nombre

    cout << " Veuillez entrer votre nombre: ";
    cin >> votreNombre;


    // La boucle qui permet de trouver un nombre al�atoirement entre 1 et 100.
    // L'utilisateur doit le trouver 
    while (iRandom = rand() % 101; iRandom != votreNombre; iRandom)
    {
        cout << iRandom << endl;

    }


    // Si le nombre de l'ordi est plus grand que votre nombre, la console vous avertit 
    if (iRandom > votreNombre)
    {
        cout << " Le nombre est plus grand ! ";



    }

    // Inverse, si le nombre est petit la console vous avertit
    else
    {
        cout << " Le nombre est plus petit !";

    }

    // Le programme vous dit si vous avez bien trouver le nombre de l'ordi
    if (iRandom == votreNombre)

    {
        cout << " VOUS AVEZ TROUVE !!!";

    }
    // Retour � la ligne pour la prochaine tentative
    std::cout << std::endl;

    // Boucle qui fait reprendre le programme
    while (iRandom != votreNombre);




    /*
    J'avais trouv� une autre mani�re de pouvoir fait ce programme mais je pense qu'on avait pas le choix d'utiliser
    la boucle for et while. L'erreur c'est que la boucle n'est pas bien �tabli et le nombre du programme
    s'affiche sans cesse dans la console. J'ai vraiment essay� de trouver mais je n'ai pas r�ussi.


    */






    return 0;
}