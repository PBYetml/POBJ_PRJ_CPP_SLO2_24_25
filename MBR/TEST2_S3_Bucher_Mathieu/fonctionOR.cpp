//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionOR.cpp
// Date de création 	: 19.01.2021
// Date de modification : 06.01.2025
//
// Auteur 				: Philou (Ph. Bovey)
// mod                  : Bucher Mathieu
// Description          : ce programme est relié au test n°2 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entrées / sorties 
#include <iomanip>		//-- lib pour la partie affichage 

//-- librairie personnelle --// 
#include "fonctionOR.h"

void fonctionOR::AfficherInfo()
{
    //-- déclaration d'objet --// 


    //-- déclaration de variables --// 

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION OR \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << " | ";

    //-- info décimal --//
    std::cout << entreeA << " | ";

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    FonctionBinaire::ConversionBinaire();
    //-- affichage de la valeur en binaire --// 
    std::cout << entreeA << std::endl; //entreeA en Binaire

    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | ";

    //-- info décimal --//
    std::cout << entreeB << " | ";

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    FonctionBinaire::ConversionBinaire();
    //-- affichage de la valeur en binaire --// 
    std::cout << entreeB << std::endl;   //entreeB en Binaire


    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie " << " | ";

    //-- info décimal --//
    std::cout << sortie << " | ";
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    FonctionBinaire::ConversionBinaire();
    //-- affichage de la valeur en binaire --// 
    std::cout << sortie << std::endl;    //sortie en binaire
}

void fonctionOR::OperationBinaire()
{
	// operation binaire OR entre deux valeur
    sortie = entreeA | entreeB;
}

