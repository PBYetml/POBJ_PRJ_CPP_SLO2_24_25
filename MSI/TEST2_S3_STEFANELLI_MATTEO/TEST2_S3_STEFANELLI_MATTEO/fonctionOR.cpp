//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionOR.cpp
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
#include "fonctionOR.h"

void fonctionOR::AfficherInfo()
{
    //-- déclaration d'objet --// 
    

    //-- déclaration de variables --// 
    uint8_t valUserA;
    uint8_t valConvertA;
    uint8_t valUserB;
    uint8_t valConvertB;
    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION OR \n" << std::endl;

    //-- construction de l'afficahge --// 
	//-- pour la mise en forme de l'afficahge utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    //-- info litteral --//
    std::cout << " A " << " | " << valUserA << " | " << valConvertA << std::endl;

    //-- info décimal --//

    //-- info binaire --// 
    //-- appel de la méthode de convertion binaire --//
    ConversionBinaire(valUserA);
 


    //-- entree B --// 
    //-- info litteral --//
    std::cout << " B " << " | " << valUserB << " | " << valConvertB << std::endl;

    //-- info décimal --//

    //-- info binaire --// 

    //-- appel de la méthode de convertion binaire --//
    ConversionBinaire(valUserB);



    //-- Sortie --// 
    //-- info litteral --//
    std::cout << " Sortie "  << " | ";

    //-- info décimal --//

    //-- info binaire --// 

    //-- appel de la méthode de convertion binaire --//


    //-- affichage de la valeur en binaire --// 

}

void fonctionOR::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
    
}


void fonctionOR::fonctionOR()
{
}
void fonctionOR::~fonctionOR()
{
}

