#ifndef FonctionBinaire_h
#define FonctionBinaire_h

//-- librairie standart --// 
#include <string>
#include <stdint.h>

//-- définition ou constante --// 
#define LIMITVALDECIMAL 1
#define ZERO 0
#define UN 1
#define DEUX 2
//-- énumération --// 
enum e_FonctionBinaire { AND = 1, OR, XOR } ;   //choixFonctBin;

class FonctionBinaire {

 public:
	 //-- attribut --// 
     uint8_t choixFonction;
 
     //-- méthode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
     void InsererValeur();


 protected:
    //-- attribut --// 
     uint8_t entreeA;
     uint8_t entreeB;
     uint8_t nbDigit;
     uint8_t sortie;
    //-- méthode --// 
     void ConversionBinaire();

private:
    //-- attributs --// 
    int limitMaxValue;
	//-- méthode --// 
};

#endif // FonctionBinaire_h
