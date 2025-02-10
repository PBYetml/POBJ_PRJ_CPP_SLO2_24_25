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
	FonctionBinaire entreeA, entreeB, nbDigit;
	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution; 

	//-- déclaration de variable --// 
	char finProgramme;
	char UserNumber;
	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		cout << "Veuillez choisir une fonction binaire : 1) pour une fonction AND \n";
		cout << "				        2) pour une fonction OR \n";
		cout << "				        3) pour une fonction XOR \n";
		//-- récupération choix utilisateur --// 
		cin >> UserNumber;
		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 
		cout << UserNumber;

		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		cout << "veuilez inserer le nombre de digit voulue : ";
		//cin >> nbDigit;
		//-- a décommenter ci-dessous !!!
		//Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//
		switch (UserNumber) {
		case 'AND':
			fonctionAND();
			break;

		case 'OR':
			fonctionOR;
			break;
		case 'XOR':
			break;
		} // end switch

		//-- a décommenter ci-dessous !!!		
		//Resolution->OperationBinaire();

		//-- afficher le  resultat 
		//-- a décommenter ci-dessous !!!
		//Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "Voulez-vous continuer le programme [o/n] : \n"; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}