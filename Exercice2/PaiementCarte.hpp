
#ifndef PAIEMENT_CARTE_HPP
#define PAIEMENT_CARTE_HPP

#include "Paiement.hpp"

class PaiementCarte : public Paiement
{
public:
    // Redefinition de la methode de paiement
    void effectuerPaiement(double montant) const override;
};

#endif
