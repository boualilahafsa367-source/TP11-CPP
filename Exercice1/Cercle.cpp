
#include "Cercle.hpp"

// Initialise le rayon du cercle
Cercle::Cercle(double r) : rayon(r)
{
}

// Calcule l'aire du cercle : pi * rayon * rayon
double Cercle::aire() const
{
    const double PI = 3.141592653589793;
    return PI * rayon * rayon;
}
