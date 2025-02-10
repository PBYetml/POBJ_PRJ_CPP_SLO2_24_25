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

#include <iostream>      //-- utilisation des entrées / sorties 
#include <iomanip>       //-- lib pour la partie affichage 
#include "fonctionOR.h"

void fonctionOR::AfficherInfo() {
    // Message utilisateur
    std::cout << "\nRESULTAT FONCTION OR\n";

    // Affichage de l'entrée A
    std::cout << "A : " << static_cast<char>(entreeA) << " | Binaire : ";
    for (int i = 7; i >= 0; --i) {
        std::cout << ((entreeA >> i) & 1);
    }
    std::cout << "\n";

    // Affichage de l'entrée B
    std::cout << "B : " << static_cast<char>(entreeB) << " | Binaire : ";
    for (int i = 7; i >= 0; --i) {
        std::cout << ((entreeB >> i) & 1);
    }
    std::cout << "\n";

    // Affichage de la sortie
    std::cout << "Sortie : " << static_cast<char>(sortie) << " | Binaire : ";
    for (int i = 7; i >= 0; --i) {
        std::cout << ((sortie >> i) & 1);
    }
    std::cout << "\n";
}


void fonctionOR::OperationBinaire() {
    // Opération logique OR entre A et B
    sortie = entreeA | entreeB;
}
