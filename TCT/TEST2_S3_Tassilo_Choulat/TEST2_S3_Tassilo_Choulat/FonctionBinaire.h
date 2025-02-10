#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1

//-- énumération --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 
     
 
     //-- méthode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire();
     virtual void InsererValeur();
     


 protected:
    //-- attribut --// 
     char entreeA;
     char entreeB;
     char nbDigit;
     char sortie;
    //-- méthode --// 
     int ConversionBinaire(std::string valConvert);

private:
    //-- attributs --// 
    char limitMaxValue;
	//-- méthode --// 
};

#endif // FonctionBinaire_h
