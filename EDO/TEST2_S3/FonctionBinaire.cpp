//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionBinaire.cpp
// Date de création 	: 19.01.2021
// Date de modification : 20.01.2021
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : ce programme est relié au test n°1 C++ - SLO2
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
//----------------------------------------------------------------------------------//

//-- librairie standart --// 
#include <iostream>		//-- utilisation des entrées / sorties 
#include <iomanip>		//-- lib pour la partie affichage 
#include <cstdlib>      //-- librairie système 
#include <stdint.h>     //-- librairie int
#include <math.h>       //-- librairie pour pow


//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    short repValA= ZERO;// Variable pour stocker la réponse de l'utilisateur. short pour permettre d'aller jusqu'a +255 pas possible avec un char
    uint8_t repValAAbs = ZERO;
    short repValB = ZERO;// Variable pour stocker la réponse de l'utilisateur. short pour permettre d'aller jusqu'a +255 pas possible avec un char
    uint8_t repValBAbs = ZERO;
    uint8_t valMax = ZERO;
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : 1 - 8"; 
    
    //-- récupération de la valeur --// 
    std::cin >> nbDigit; // Lit la réponse de l'utilisateur
    //-- création du nombre limite que peut inserer l'utilisateur --// 
    if (nbDigit > 0) {
        if (nbDigit < 9) {
            //-- message utilisateur --//
            //-- MAJ de l'entree A 	
            std::cout << "\nveuillez inserer une valeur entre 0 et " << valMax <<":"; 	

            //-- rendre la valeur en mode absolue --// 
            repValAAbs = abs(repValA);
            //-- test sur la valeur --//
            valMax = (pow(DEUX, nbDigit)) - UN; //Pour savoir la plage de valeur

            if (repValAAbs > valMax) {
                entreeA = valMax + UN;
            }
            if (repValAAbs == ZERO) {
                entreeA = LIMITVALDECIMAL;
            }
            else {
                entreeA = repValAAbs;
            }

            //-- message utilisateur --//
            //-- MAJ de l'entree B 	
            std::cout << "\nveuillez inserer une valeur entre 0 et " << valMax << ":"; 	

            //-- rendre la valeur en mode absolue --// 
            repValBAbs = abs(repValB);
            //-- test sur la valeur --//
            valMax = (pow(DEUX, nbDigit)) - UN; //Pour savoir la plage de valeur

            if (repValBAbs > valMax) {
                entreeB = valMax + UN;
            }
            if (repValBAbs == ZERO) {
                entreeB = LIMITVALDECIMAL;
            }
            else {
                entreeB = repValBAbs;
            }
        }
    }
    
    else {
        std::cout << "veuillez inserer le nombre de digit voulue : entre 1 et 8";
    }
}


void FonctionBinaire::ConversionBinaire(void)
{
    //-- déclaration d'objet --// 
    FonctionBinaire NbaConvertir;
    //-- déclaration de variable --//
    uint8_t valConvert = ZERO;
    // Tableau pour stocker les bits
    uint8_t binaire[8];
    uint8_t index = 0; // Index pour le tableau
    //-- boucle de convertion --// 
    while (valConvert > 0) {
        // Stocke le reste (0 ou 1) dans le tableau
        binaire[index] = valConvert % 2;
        valConvert = valConvert / 2; // Divise le nombre par 2
        index++; // Incrémente l'index
    }
        //-- récuperation de l'info binaire --//
        
        //-- MAJ de la valeur à convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la chaîne de caractère => object string
    
}


//-- FONCTION NON DEFINIE --// 
//void FonctionBinaire::OperationBinaire()
//{
//    
//}
//
//void FonctionBinaire::AfficherInfo()
//{
//
//}



