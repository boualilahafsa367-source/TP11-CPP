
#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "Forme.hpp"

class Cercle : public Forme
{
private:
    double rayon;

public:
    // Constructeur avec initialisation du rayon
    Cercle(double r);

    // Redefinition de la methode aire
    double aire() const override;
};

#endif
