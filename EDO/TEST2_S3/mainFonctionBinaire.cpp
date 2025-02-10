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
#include <stdint.h>     //-- librairie int

//-- librairie personnelle --// 
#include "FonctionBinaire.h"


//-- utilisation du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- déclaration d'objet allocation statique --// 
	FonctionBinaire Fonction;
	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution; 

	//-- déclaration de variable --// 
	uint8_t repUtilisateur, finProgramme;

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"
		cout << "Veuillez choisir un fonction binaire : 1) pour une fonction AND"
			<< setw(60);
		cout << "2) pour une fonction OR";

		//-- récupération choix utilisateur --// 
		cin >> repUtilisateur;
	
		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 
		//Fonction.choixFonction = 

		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		
		Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//
				
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}