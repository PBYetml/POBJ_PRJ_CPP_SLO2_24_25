#include <iostream>     //-- utilisation des entrées / sorties 
#include <iomanip>      //-- lib pour la partie affichage 
#include <cstdlib>      //-- librairie système 
#include <cmath>        //-- librairie pour pow()
#include "FonctionBinaire.h"

//-- Méthode InsererValeur --//

 void FonctionBinaire::InsererValeur() 
{
        //-- message utilisateur --//
        std::cout << "Veuillez inserer le nombre de digits voulu : ";
        std::cin >> nbDigit;

        //-- Création de la limite maximale --//
        limitMaxValue = static_cast<int>(std::pow(2, static_cast<int>(nbDigit))) - 1;

        //-- Entrée A --//
        std::cout << "\nVeuillez inserer une valeur entre 0 et " << limitMaxValue << " pour A : ";
        std::cin >> entreeA;
        entreeA = std::abs(entreeA); // Valeur absolue
        if (entreeA > limitMaxValue) {
            std::cout << "Erreur : La valeur insérée pour A dépasse la limite !\n";
            return;
        }

        //-- Entrée B --//
        std::cout << "Veuillez inserer une valeur entre 0 et " << limitMaxValue << " pour B : ";
        std::cin >> entreeB;
        entreeB = std::abs(entreeB); // Valeur absolue
        if (entreeB > limitMaxValue) {
            std::cout << "Erreur : La valeur insérée pour B dépasse la limite !\n";
            return;
        }
}



//-- Méthode ConversionBinaire --//
std::string FonctionBinaire::ConversionBinaire(int valConvert) {
    std::string binaire = ""; // Chaîne pour stocker la conversion
    for (int i = nbDigit - 1; i >= 0; --i) {
        binaire += (valConvert & (1 << i)) ? '1' : '0';
    }
    return binaire; // Retourne la chaîne binaire
}

//-- Méthode OperationBinaire --//
void FonctionBinaire::OperationBinaire() {
    std::cout << "Cette méthode doit être définie dans les sous-classes.\n";
}

//-- Méthode AfficherInfo --//
void FonctionBinaire::AfficherInfo() {
    std::cout << "A : " << static_cast<int>(entreeA) << " | Binaire : " << ConversionBinaire(entreeA) << "\n";
    std::cout << "B : " << static_cast<int>(entreeB) << " | Binaire : " << ConversionBinaire(entreeB) << "\n";
    std::cout << "Sortie : " << static_cast<int>(sortie) << " | Binaire : " << ConversionBinaire(sortie) << "\n";
}