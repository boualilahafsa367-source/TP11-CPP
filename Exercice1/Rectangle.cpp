
#include "Rectangle.hpp"

// Initialise la longueur et la largeur
Rectangle::Rectangle(double l, double L)
    : longueur(l), largeur(L)
{
}

// Calcule l'aire du rectangle
double Rectangle::aire() const
{
    return longueur * largeur;
}
