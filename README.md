// But: Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.

// Auteur: David-Alexandre Groulx

// Date: 2020-10-04



#include <iostream>
using namespace std;

int main()

{

	// Déclaration des variables

	int nbProduitVendu;
	const float PayeSemaine = 250;





	// Le résultat affiché par le programme

	float tauxPourcentage;     // tauxPourcentage= PayeSemaine + 7.5 % ProduitVendu




	// Demande à l'utilisateur d'entrer les valeurs

	cout << " Veuillez enter le nombre de vos produits vendu : ";
	cin >> nbProduitVendu;


	while (nbProduitVendu != -1)  // Si le nombre est -1, le programme s'annule
	{



		// Calcul pour determiner le 7.5%

		tauxPourcentage = nbProduitVendu * 0.075 + PayeSemaine; // Somme de l'équation

		cout << tauxPourcentage << endl;  // Résultat donné


		cout << " Veuillez enter le nombre de vos produits vendu : ";
		cin >> nbProduitVendu;

	}
	// La boucle recommence jusqu'à temps qu'on fasse -1
	return 0;
}


/*
Plan de tests

Nombre de vente de produits                        Résultat espéré                Résultat

5000                                                   625                          625


45                                                     253                          253


7000                                                    775                         775


-1                                              Annulation du programme           Programme annuée



*/
