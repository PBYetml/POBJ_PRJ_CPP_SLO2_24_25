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
     uint8_t entreeA = 0;
     uint8_t entreeB = 0;
     uint8_t nbDigit = 0;
     int8_t output = 0;
     std::string valBinaire;
     //-- méthode --// 
     std::string ConversionBinaire(int8_t valConvert);

private:
    //-- attributs --// 
    int limitMaxValue = 0;
	//-- méthode --// 
};

#endif // FonctionBinaire_h
