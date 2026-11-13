
#ifndef PAIEMENT_HPP
#define PAIEMENT_HPP

class Paiement
{
public:
    // Methode virtuelle pure : chaque moyen de paiement
    // doit definir sa propre facon d'effectuer un paiement
    virtual void effectuerPaiement(double montant) const = 0;

    // Destructeur virtuel pour une destruction correcte
    // des objets derives
    virtual ~Paiement();
};

#endif
