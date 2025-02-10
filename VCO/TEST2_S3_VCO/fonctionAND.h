#ifndef fonctionAND_h
#define fonctionAND_h

#include "FonctionBinaire.h"

class fonctionAND : public FonctionBinaire {
public:
    void OperationBinaire() ; // Redéfinition pour l'opération AND
    void AfficherInfo();    // Redéfinition pour afficher les infos
};

#endif // fonctionAND_h
