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
     //-- Constructeur --//
     FonctionBinaire();

     //-- Destructeur --//
     ~FonctionBinaire();

	 //-- attribut --// 
     
 
     //-- méthode --// 
     virtual void AfficherInfo();
     virtual void OperationBinaire(); 
     virtual void InsererValeur();

 protected:
    //-- attribut --// 
     uint8_t entreeA;
     uint8_t entreeB;
     uint8_t nbDigit;
     uint8_t sortie;

    //-- méthode --// 
    std::string ConversionBinaire(uint32_t valConvert);


private:
    //-- attributs --// 
    uint32_t limitMaxValue;
	//-- méthode --// 
    
};

#endif // FonctionBinaire_h
