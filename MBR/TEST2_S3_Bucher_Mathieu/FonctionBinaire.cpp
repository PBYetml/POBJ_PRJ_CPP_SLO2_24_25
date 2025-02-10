//-----------------------------------------------------------------------------------//
// Nom du projet 		: Fonctions Binaires 
// Nom du fichier 		: FonctionBinaire.cpp
// Date de création 	: 19.01.2021
// Date de modification : 06.01.2025
//
// Auteur 				: Philou (Ph. Bovey)
// mod                  : Bucher Mathieu
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
    //-- déclaration de variable --//
    int valeurUser1 = 0;
    int valeurUser2 = 0;

    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --// 
    std::cin >> nbDigit;
    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = (2 ^ nbDigit) - 1;
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et "; 	// à complèter 
    std::cin >> valeurUser1;
    //-- rendre la valeur en mode absolue --// 
    abs(valeurUser1);
    //-- test sur la valeur --//
    if (valeurUser1 > limitMaxValue)
    {
        valeurUser1 = limitMaxValue;
    }
    if (valeurUser1 < 0)
    {
        valeurUser1 = abs(valeurUser1);
    }

   if (valeurUser1 == 0)
    {
        valeurUser1 = 1;
    }

    entreeA = valeurUser1;


    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et  ";  	// à complèter 
    std::cin >> valeurUser2;
    //-- rendre la valeur en mode absolue --// 
    abs(valeurUser2);
    //-- test sur la valeur --//
    if (valeurUser2 > limitMaxValue)
    {
        valeurUser2 = limitMaxValue;
    }
    if (valeurUser2 < 0)
    {
        valeurUser2 = abs(valeurUser2);
    }

    if (valeurUser2 == 0)
    {
        valeurUser2 = 1;
    }
    entreeB = valeurUser2;
}


void FonctionBinaire::ConversionBinaire()
{
    //-- déclaration d'objet --// 
    //-- déclaration de variable --//
    int valConvert;
    static int i = 0;
    //string valBinaire;
    //-- boucle de convertion --// 
    /*for (i; i <= LimitMaxValue; i++)
    {
        //-- récuperation de l'info binaire --//
        valBinaire = valConvert % 2;
        //-- MAJ de la valeur à convertir --// 
        valConvert = valConvert / 2;
        //-- utilisation  de la table ASCII --//

    }*/
	// retour de la chaîne de caractère => object string
    /////return String(valBinaire);
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



