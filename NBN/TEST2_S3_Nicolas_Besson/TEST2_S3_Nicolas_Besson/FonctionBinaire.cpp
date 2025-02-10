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
using namespace std;
#include <iomanip>		//-- lib pour la partie affichage 
#include <cstdlib>      //-- librairie système 

#define _USE_MATH_DEFINES

#include "math.h"


//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    std::cout << "veuillez inserer le nombre de digit voulue : "; 
    
    //-- récupération de la valeur --//
    std::cin >> nbDigit;


    //-- création du nombre limite que peut inserer l'utilisateur --// 
    limitMaxValue = pow(2, nbDigit) - 1;

    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "\nveuillez inserer une valeur entre 0 et " << limitMaxValue << endl; 	// à complèter 
    std::cin >> entreeA; //recuperation de la valeur A

    //-- rendre la valeur en mode absolue --// 
    entreeA = abs(entreeA);
    //-- test sur la valeur --//
    if (entreeA > limitMaxValue)
    {
        entreeA = limitMaxValue;
    }
    
    if (entreeA < 0)
    {
        abs(entreeA);
    }
    if (entreeA = 0)
    {
        entreeA = 1;
    }

    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et  ";  	// à complèter 
    std::cin >> entreeB;

    //-- rendre la valeur en mode absolue --// 
    entreeA = abs(entreeB);
    //-- test sur la valeur --//
    if (entreeB > limitMaxValue)
    {
        entreeB = limitMaxValue;
    }

    if (entreeB < 0)
    {
        abs(entreeB);
    }
    if (entreeB = 0)
    {
        entreeB = 1;
    }
}


std::string FonctionBinaire::ConversionBinaire(int valConvert)
{
    //-- déclaration d'objet --// 
    
    //-- déclaration de variable --//
    int i;
    int indexTab = nbDigit;
    std::string binA[sizeof nbDigit];
    int resteA;
    std::string binB[sizeof nbDigit];
    int resteB;

    //-- boucle de convertion --// 
    for (i = 0; i < nbDigit; i++)
    {
        //convertion pour la valeur A
        resteA = entreeA % 2;
        if (resteA != 0)
        {
            binA[indexTab] = '0';
        }
        else
        {
            binA[indexTab] = '1';
        }
        //convertion pour la valeur B
        resteB = entreeB % 2;
        if (resteB != 0)
        {
            binB[indexTab] = '0';
        }
        else
        {
            binB[indexTab] = '1';
        }
        indexTab--;
    }

        //-- récuperation de l'info binaire --//
        //-- MAJ de la valeur à convertir --// 
        
        //-- utilisation de la table ASCII --// 
        
	// retour de la chaîne de caractère => object string
    //return binA, binB;
}


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



