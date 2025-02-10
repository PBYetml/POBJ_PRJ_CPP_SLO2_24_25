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
    limitMaxValue = 2^nbDigit-1;

    //-- message utilisateur --//
    
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et 256"; 	// à complèter 
    std::cout << limitMaxValue;

    std::cin >> entreeA;
    //-- rendre la valeur en mode absolue --// 
    
    //-- test sur la valeur --//
    if (entreeA > limitMaxValue)
    {
        entreeA = limitMaxValue;
    }

    if (entreeA < 0)
    {
        entreeA = entreeA * (-1);
    }

    if (entreeA == 0)
    {
        entreeA = 0;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et 256";  	// à complèter 
    std::cout << limitMaxValue;

    std::cin >> entreeB;
    //-- rendre la valeur en mode absolue --// 

    //-- test sur la valeur --//
    if (entreeB > limitMaxValue)
    {
        entreeB = limitMaxValue;
    }

    if (entreeB < 0)
    {
        entreeB = entreeB * (-1);
    }

    if (entreeB == 0)
    {
        entreeB = 0;
    }
}


int FonctionBinaire::ConversionBinaire(std::string valConvert)
{
    //-- déclaration d'objet --// 
    
    //-- déclaration de variable --//
        static int valBinaire;
    //-- boucle de convertion --// 
        //-- récuperation de l'info binaire --//
             valBinaire = valConvert % 2;  //modulo 2 de valConvert

        //-- MAJ de la valeur à convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
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





