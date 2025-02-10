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
#include <string>
//-- librairie personnelle --// 
#include "FonctionBinaire.h"


//-- utilisataion du namespace std --// 
using namespace std; 

//-- programme principale --// 
int main()
{
	//-- déclaration d'objet allocation statique --// 
	
	//-- déclaration d'objet allocation dynamique --// 
	FonctionBinaire *Resolution; 

	//-- déclaration de variable --// 
	uint8_t userChoix;
	std::string finProgramme;					//je comrpend pas pourquoi ca veut ce définir en tant que type 

	do
	{
		//-- message utilisateur : choix de la foncion binaire --//
		//-- pour les mise en forme : utilisation la fonction "swet"    ---> aucune info sur comment utiliser cette fonction..
		std::cout << "Veuillez choisir une fonctione binaire\n" << std::endl;
		std::cout << "1) pour une fonction AND\n" << std::endl;
		std::cout << "2) pour une fonction OR\n" << std::endl;
		//-- récupération choix utilisateur --// 
		std::cin >> userChoix;

		//-- MAJ de l'objet en fonction du choix de l'utilistaeur --// 


		//-- demande de valeur d'entrée (nb de digit, valeur A, valeur B)
		
		Resolution->InsererValeur();

		//-- exectuion de la fonctionBinaire choisie --//
				
		Resolution->OperationBinaire();

		//-- afficher le  resultat 
		
		Resolution->AfficherInfo();

		//-- message utilisateur : continuer le programmme --// 
		std::cout << "\nVoulez-vous continuer le programme [o/n] : "; 
		std::cin >> finProgramme; 

	} while ((finProgramme == 'o') || (finProgramme == 'O')); 

	//-- fin de programme --// 
	return 0; 
}