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
#include "math.h"

//-- librairie personnelle --// 
#include "FonctionBinaire.h"



/*
FonctionBinaire::FonctionBinaire() {}

FonctionBinaire::~FonctionBinaire() {}
*/

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : " << std::endl;
    
    //-- récupération de la valeur --// 
    std::cin >> nbDigit;
    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = (int)pow(2, nbDigit);
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et"<< limitMaxValue <<std::endl;// à complèter 
    char inputVal;
    std::cin >> inputVal;
     
    //-- rendre la valeur en mode absolue --// 
    inputVal = abs(inputVal);
    //-- test sur la valeur --//
    if (inputVal > limitMaxValue)
    {
        entreeA = limitMaxValue;
    }
    else if (inputVal == 0)
    {
        entreeA = 1; 

    }
    else
    {
        entreeA = inputVal;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et"<< limitMaxValue << std::endl;  	// à complèter 
    std::cin >> inputVal;
     //-- rendre la valeur en mode absolue --// 
    inputVal = abs(inputVal);
    //-- test sur la valeur --//
    if (inputVal > limitMaxValue)
    {
        entreeB = limitMaxValue;
    }
    else if (inputVal == 0)
    {
        entreeB = 1;

    }
    else
    {
        entreeB = inputVal;
    }
}


std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
    //-- déclaration d'objet --// 
    
    //-- déclaration de variable --//
    std::string result; 
    std::string temp = 0;
    //-- boucle de convertion --// 
    while (valConvert != 0)
    {
        //-- utilisation  de la table ASCII --// //0=alt+48 1=49 
        temp = (valConvert % 2) ? '1' : '0';
        //-- récuperation de l'info binaire --//
        result.append(temp);
        //-- MAJ de la valeur à convertir --// 
        valConvert = valConvert / 2;
        //inerser le string 
         //  result.revrse()
        
    }
	// retour de la chaîne de caractère => object string
    return result;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



