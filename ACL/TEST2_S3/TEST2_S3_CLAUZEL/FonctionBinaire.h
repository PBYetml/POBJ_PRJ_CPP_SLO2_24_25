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
     void InsererValeur(void);


 protected:
    //-- attribut --// 
     char entreeA; 
     char entreeB;
     char nbDigit;
     char sortie;
    //-- méthode --// 
    std::string ConversionBinaire(int valConvert);


private:
    //-- attributs --// 
    int limitMaxValue;
	//-- méthode --// 
};

#endif // FonctionBinaire_h
