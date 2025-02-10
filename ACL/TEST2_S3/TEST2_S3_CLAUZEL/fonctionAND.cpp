//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionAND.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
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
#include "fonctionAND.h"
/*
fonctionAND::fonctionAND()
{};
fonctionAND::fonctionAND() : FonctionBinaire()
{};
*/


void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 


    //-- déclaration de variables --// 

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) MDR

	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << " | " << "     " << entreeA << " | " << "     "<< ConversionBinaire(entreeA);

    //-- info décimal --//
    //std::cout << entreeA;

    //-- info binaire --// 
    //std::cout << ConversionBinaire(entreeA);
    //-- appel de la méthode de convertion binaire --//

    //-- affichage de la valeur en binaire --// 


    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | " << "     " << entreeB << " | " << "     " << ConversionBinaire(entreeB);

    //-- info décimal --//

    //-- info binaire --// 

    //-- appel de la méthode de convertion binaire --//

    //-- affichage de la valeur en binaire --// 



    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | " << "     " << sortie << " | " << "     " << ConversionBinaire(sortie);

    //-- info décimal --//

    //-- info binaire --// 

    //-- appel de la méthode de convertion binaire --//


    //-- affichage de la valeur en binaire --// 

}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
    sortie = entreeA & entreeB;

}

