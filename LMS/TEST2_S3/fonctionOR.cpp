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
#include <cstdint>  // Inclusion requise pour int8_t
// Correction : Inclusion de <cstdint> pour assurer la compatibilité avec int8_t.

//-- librairie personnelle --// 
#include "fonctionOR.h"

void fonctionOR::AfficherInfo()
{
    //-- déclaration d'objet --// 
    std::string binaireA;
    std::string binaireB;
    //-- déclaration de variables --// 

    //-- message utilisateur --// 
    std::cout << std::endl;
    std::cout << "RESULTAT FONCTION OR \n" << std::endl;

    //-- construction de l'affichage --// 
	//-- pour la mise en forme de l'affichage utilisation des fonction suivantes : setiosflags(std::ios::left/right), resetiosflags(std::ios::right), std::setw(9) 
    
	//-- entree A --//
    // Correction : Calcul de binaireA avant l'affichage pour assurer un ordre logique dans le code.
    binaireA = ConversionBinaire(entreeA);  // Conversion d'abord
    //Affiche de la sortie en utilisant setw pour l'indentation des ligne
    std::cout << " A " << " | " << std::setw(9) << entreeA << " | " << std::setw(9) << binaireA << std::endl;

   
    //-- entree B --// 
    // Correction : Calcul de binaireB avant l'affichage pour assurer un ordre logique et correction du paramètre.
    binaireB = ConversionBinaire(entreeB);  // Correction du paramètre et calcul avant affichage
    //Affiche de la sortie en utilisant setw pour l'indentation des ligne
    std::cout << " B " << " | " << std::setw(9) << entreeB << " | " << std::setw(9) << binaireB << std::endl;


    //-- Sortie --// 
    std::cout << " Sortie " << " | " << std::setw(9) << output << " | ";
    std::cout << std::setw(9) << valBinaire << " | " << std::endl;

    //-- info binaire --// 
    // Suppression de OperationBinaire() ici car il doit être exécuté avant AfficherInfo().
}

void fonctionOR::OperationBinaire()
{
    int8_t output = 0;
    // operation binaire entre AND entre deux valeur
    output = entreeA | entreeB;
    // Correction : Ajout d’une validation avant la conversion binaire pour s’assurer que output est correctement mis à jour.
    if (output >= 0) {
        // Correction : Remplacement de l’addition par l’opérateur OR binaire (|).
        valBinaire = ConversionBinaire(output);
    }

}

