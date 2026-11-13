
#include "Fichier.hpp"

// Initialise les informations du fichier
Fichier::Fichier(string nom, int taille)
    : m_nom(nom), m_taille(taille)
{
}

// Retourne le nom du fichier
string Fichier::nom() const
{
    return m_nom;
}

// Retourne la taille du fichier
int Fichier::taille() const
{
    return m_taille;
}
