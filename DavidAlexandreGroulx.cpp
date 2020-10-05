// But: Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
//L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
//100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
//*nombre.

// Auteur: David-Alexandre Groulx
// Date: 2020-10-04


#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    // Déclaration des variables
    int iRandom;
    int votreNombre;

    // Génération du nombre aléatoire

    srand(time(0));

    // On demande à l'utilisateur d'entrer son nombre

    cout << " Veuillez entrer votre nombre: ";
    cin >> votreNombre;


    // La boucle qui permet de trouver un nombre aléatoirement entre 1 et 100.
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
    // Retour à la ligne pour la prochaine tentative
    std::cout << std::endl;

    // Boucle qui fait reprendre le programme
    while (iRandom != votreNombre);




    /*
    J'avais trouvé une autre manière de pouvoir fait ce programme mais je pense qu'on avait pas le choix d'utiliser
    la boucle for et while. L'erreur c'est que la boucle n'est pas bien établi et le nombre du programme
    s'affiche sans cesse dans la console. J'ai vraiment essayé de trouver mais je n'ai pas réussi.


    */






    return 0;
}