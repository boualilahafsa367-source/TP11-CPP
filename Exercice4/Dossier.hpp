
#ifndef DOSSIER_HPP
#define DOSSIER_HPP

#include "NoeudFichier.hpp"
#include <vector>

class Dossier : public NoeudFichier
{
private:
    string m_nom;

    // Liste des fichiers et sous-dossiers contenus
    vector<NoeudFichier*> enfants;

public:
    // Constructeur du dossier
    Dossier(string nom);

    // Ajoute un fichier ou un sous-dossier
    void ajouter(NoeudFichier* element);

    // Retourne le nom du dossier
    string nom() const override;

    // Calcule la somme des tailles des enfants
    int taille() const override;

    // Affiche la structure du dossier
    void afficher(int niveau = 0) const;

    // Destructeur : libere les elements contenus
    ~Dossier() override;
};

#endif
