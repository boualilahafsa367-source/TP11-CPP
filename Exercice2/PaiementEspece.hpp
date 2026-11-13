
#ifndef PAIEMENT_ESPECE_HPP
#define PAIEMENT_ESPECE_HPP

#include "Paiement.hpp"

class PaiementEspece : public Paiement
{
public:
    // Redefinition de la methode de paiement
    void effectuerPaiement(double montant) const override;
};

#endif
