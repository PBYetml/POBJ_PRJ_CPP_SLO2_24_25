//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: main.cpp
// Date de création 	: 19.01.2021
// Date de modification : 04.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est relié au test n°2 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entrées / sorties 
#include <iomanip>		//-- lib pour la partie affichage 

//-- librairie personnelle --// 
#include "FonctionBinaire.h"
#include "fonctionAND.h"
#include "fonctionOR.h"

//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- déclaration d'objet allocation statique --// 

	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution; 
	char finProgramme;
	//-- déclaration de variable --// 
    
	do
	{
        // Déclaration variable pour le choix de la fonction à utiliser en locale
        int choix;
        //-- message utilisateur : choix de la fonction binaire --//
        cout << "Choisissez une fonction binaire :\n";
        cout << "1 - AND\n";
        cout << "2 - OR\n";
        cout << "Votre choix : ";
        cin >> choix;

        //-- MAJ de l'objet en fonction du choix de l'utilisateur --// 
        switch (choix) 
        {
        case 1:
            Resolution = new fonctionAND();
            break;
        case 2:
            Resolution = new fonctionOR();
            break;
        default:
            cout << "Choix invalide. Veuillez réessayer.\n";
            continue; //ne doit pas s'arrêter (il me semble) dû le continue et pas le break.
        }
		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		//-- a décommenter ci-dessous !!!
		Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//
		//-- a décommenter ci-dessous !!!		
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		//-- a décommenter ci-dessous !!!
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 
        
        //-- libérer la mémoire dynamiquement
        delete Resolution;

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}

