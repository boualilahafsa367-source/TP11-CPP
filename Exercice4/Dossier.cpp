
#include "Dossier.hpp"
#include <iostream>
using namespace std;

// Initialise le nom du dossier
Dossier::Dossier(string nom) : m_nom(nom)
{
}

// Ajoute un element dans le dossier
void Dossier::ajouter(NoeudFichier* element)
{
    if (element != nullptr)
    {
        enfants.push_back(element);
    }
}

// Retourne le nom du dossier
string Dossier::nom() const
{
    return m_nom;
}

// Calcule la taille totale des fichiers et sous-dossiers
int Dossier::taille() const
{
    int total = 0;

    for (NoeudFichier* element : enfants)
    {
        total += element->taille();
    }

    return total;
}

// Affiche les elements avec une indentation hierarchique
void Dossier::afficher(int niveau) const
{
    for (int i = 0; i < niveau; i++)
    {
        cout << "    ";
    }

    cout << "[Dossier] " << m_nom
         << " - Taille : " << taille() << " Ko" << endl;

    for (NoeudFichier* element : enfants)
    {
        Dossier* sousDossier = dynamic_cast<Dossier*>(element);

        if (sousDossier != nullptr)
        {
            sousDossier->afficher(niveau + 1);
        }
        else
        {
            for (int i = 0; i < niveau + 1; i++)
            {
                cout << "    ";
            }

            cout << "[Fichier] " << element->nom()
                 << " - Taille : " << element->taille()
                 << " Ko" << endl;
        }
    }
}

// Libere les elements contenus dans le dossier
Dossier::~Dossier()
{
    for (NoeudFichier* element : enfants)
    {
        delete element;
    }

    enfants.clear();
}
