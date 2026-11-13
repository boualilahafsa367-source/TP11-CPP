
#ifndef FICHIER_HPP
#define FICHIER_HPP

#include "NoeudFichier.hpp"

class Fichier : public NoeudFichier
{
private:
    string m_nom;
    int m_taille;

public:
    // Constructeur avec le nom et la taille du fichier
    Fichier(string nom, int taille);

    string nom() const override;
    int taille() const override;
};

#endif
