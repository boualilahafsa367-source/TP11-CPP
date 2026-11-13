
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Forme.hpp"

class Rectangle : public Forme
{
private:
    double longueur;
    double largeur;

public:
    // Constructeur avec les dimensions du rectangle
    Rectangle(double l, double L);

    // Redefinition de la methode aire
    double aire() const override;
};

#endif
