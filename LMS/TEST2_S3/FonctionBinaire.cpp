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
//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
     //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
    std::cin >> nbDigit;

    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = (2 ^ nbDigit) - 1;
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue;
    std::cin >> entreeA;

    //-- rendre la valeur en mode absolue --// 
    entreeA = abs(entreeA);

    //-- test sur la valeur --//
    if (entreeA > limitMaxValue)
    {
        entreeA = limitMaxValue;
    }
    else if (entreeA == 0)
    {
        entreeA = 1;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue;
    std::cin >> entreeB;

    //-- rendre la valeur en mode absolue --// 
    entreeB = abs(entreeB);
    //-- test sur la valeur --//
    if (entreeB > limitMaxValue)
    {
        entreeB = limitMaxValue;
    }
    else if (entreeB == 0)
    {
        entreeB = 1;
    }
}

std::string FonctionBinaire::ConversionBinaire(int8_t valConvert)
{
    //-- déclaration d'objet --// 

    //-- déclaration de variable --//
    int convertingValue = 0; 
    //-- boucle de convertion --// 
    for (int i = 0; i < nbDigit; i++) {
        //-- récuperation de l'info binaire --//
        convertingValue = (valConvert % 2);
        //-- MAJ de la valeur à convertir --// 
        valConvert = valConvert / 2;
        //-- utilisation  de la table ASCII --// 
        if (convertingValue != 0)
        {
            // Mettre digit correspondant au i au caractère "1" / Non fonctionielle 
            //valBinaire = valBinaire << "1";
        }
        else
        {
           // Mettre digit correspondant au i au caractère "1" / Non fonctionielle 
           // valBinaire = valBinaire << "0";
        }
         
    }
	// retour de la chaîne de caractère => object string
    return valBinaire;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



