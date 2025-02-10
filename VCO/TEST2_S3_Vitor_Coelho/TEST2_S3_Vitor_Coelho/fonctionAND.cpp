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
    // Message utilisateur
    std::cout << "\nRESULTAT FONCTION AND\n";

    // Affichage de l'entrée A
    std::cout << "A : " << static_cast<int>(entreeA) << " | Binaire : ";
    for (int i = 7; i >= 0; --i) {
        std::cout << ((entreeA >> i) & 1);
    }
    std::cout << "\n";

    // Affichage de l'entrée B
    std::cout << "B : " << static_cast<int>(entreeB) << " | Binaire : ";
    for (int i = 7; i >= 0; --i) {
        std::cout << ((entreeB >> i) & 1);
    }
    std::cout << "\n";

    // Affichage de la sortie
    std::cout << "Sortie : " << static_cast<int>(sortie) << " | Binaire : ";
    for (int i = 7; i >= 0; --i) {
        std::cout << ((sortie >> i) & 1);
    }
    std::cout << "\n";
}

void fonctionAND::OperationBinaire()
{
	// operation binaire entre AND entre deux valeur
    sortie = entreeA & entreeB;
}



