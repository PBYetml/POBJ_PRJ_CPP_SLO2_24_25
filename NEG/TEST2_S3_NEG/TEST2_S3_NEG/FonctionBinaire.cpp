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
using namespace std;

//-- librairie personnelle --// 
#include "FonctionBinaire.h"

void FonctionBinaire::InsererValeur()
{
    //-- message utilisateur --// 
    cout << "veuillez inserer le nombre de digit voulue : ";
    
    //-- récupération de la valeur --// 
    cin >> nbDigit;

    //-- création du nombre limite que peut inserer l'utilisateur --// 
    if (nbDigit > 8 || nbDigit <= 0) {
        cout << "valeur du nombre de digit voulue doit etre entre 1 et 8 ";
    }
    
    //-- message utilisateur --//
	//-- MAJ de l'entree A 	
    std::cout << "veuillez inserer une valeur entre 0 et 31 \n"; 	// à complèter 

    //-- rendre la valeur en mode absolue --// 

    //-- test sur la valeur --//


    //-- message utilisateur --//
	//-- MAJ de l'entree B 	
    std::cout << "veuillez inserer une valeur entre 0 et 31 ";  	// à complèter 

    //-- rendre la valeur en mode absolue --// 

    //-- test sur la valeur --//

}


/*void FonctionBinaire::ConversionBinaire(int ValConvert, string valBinaire)
{
    //-- déclaration d'objet --// 
    
    //-- déclaration de variable --//

    //-- boucle de convertion --// 

        //-- récuperation de l'info binaire --//
        
        //-- MAJ de la valeur à convertir --// 
        
        //-- utilisation  de la table ASCII --// 
        
	// retour de la chaîne de caractère => object string

}*/


//-- FONCTION NON DEFINIE --// 
void FonctionBinaire::OperationBinaire()
{
    
}

void FonctionBinaire::AfficherInfo()
{

}



