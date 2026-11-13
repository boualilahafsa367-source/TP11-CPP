
#ifndef NOEUD_FICHIER_HPP
#define NOEUD_FICHIER_HPP

#include <string>
using namespace std;

// Classe abstraite representant un element du systeme de fichiers
class NoeudFichier
{
public:
    // Retourne le nom de l'element
    virtual string nom() const = 0;

    // Retourne sa taille
    virtual int taille() const = 0;

    // Destructeur virtuel pour une destruction polymorphique
    virtual ~NoeudFichier();
};

#endif
