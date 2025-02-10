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



void fonctionAND::AfficherInfo()
{
    //-- déclaration d'objet --// 
    std::string binaireA;
    std::string binaireB;
    //-- déclaration de variables --// 

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION AND \n" << std::endl;

    //-- construction de l'affichage --// 
    //-- pour la mise en forme de l'affichage utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 

    //-- entree A --//
    //-- info litteral --//
    std::cout << " A " << " | ";
    //-- info décimal --//
    std::cout << entreeA << " | ";
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    binaireA = ConversionBinaire(entreeA);
    //-- affichage de la valeur en binaire --// 
    std::cout << binaireA << std::endl;

    //-- entree B --// 
    //-- info litteral --//
    std::cout << "B" << " | ";

    //-- info décimal --//
    std::cout << entreeB << " | ";
    //-- info binaire --// 

    //-- appel de la méthode de convertion binaire --//
    binaireB = ConversionBinaire(entreeA);
    //-- affichage de la valeur en binaire --// 
    std::cout << binaireB << std::endl;

    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie " << " | ";

    //-- info décimal --//
    std::cout << output << " | ";
    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    OperationBinaire();

    //-- affichage de la valeur en binaire --// 
    std::cout << valBinaire << " | ";
}

void fonctionAND::OperationBinaire()
{
    int8_t output = 0;
    // operation binaire entre AND entre deux valeur
    output = entreeA* entreeB;
    valBinaire = ConversionBinaire(output);
}

