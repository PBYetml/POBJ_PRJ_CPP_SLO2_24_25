#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1

//-- énumération --// 
enum e_FonctionBinaire { AND = 1, OR } ;   //choixFonctBin;

class FonctionBinaire 
{
 public:
	 //-- attribut --// 
     //-- méthode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
     virtual void InsererValeur();
;

 protected:
    //-- attribut --// 
     int entreeA, entreeB, nbDigit, sortie; // cela devrait etre en char mais je n'ai pas casté de la manière correcte et j'ai mis donc en type int pour le contrôle 
     std::string ConversionBinaire(int valConvert);
private:
    //-- attributs --// 
    int limitMaxValue;
	//-- méthode --// 

};

#endif // FonctionBinaire_h
