
#include <iostream>
#include <vector>
#include <limits>

#include "NoeudFichier.hpp"
#include "Fichier.hpp"
#include "Dossier.hpp"

using namespace std;

int main()
{
    // Creation du dossier principal
    Dossier* documents = new Dossier("Documents");

    // Creation de deux sous-dossiers
    Dossier* cours = new Dossier("Cours_C++");
    Dossier* projets = new Dossier("Projets");

    // Ajout de fichiers dans le premier sous-dossier
    cours->ajouter(new Fichier("Classes.pdf", 850));
    cours->ajouter(new Fichier("Polymorphisme.pdf", 620));

    // Ajout de fichiers dans le deuxieme sous-dossier
    projets->ajouter(new Fichier("Application.cpp", 240));
    projets->ajouter(new Fichier("Rapport.docx", 430));

    // Ajout des sous-dossiers au dossier principal
    documents->ajouter(cours);
    documents->ajouter(projets);

    // Ajout d'un fichier directement dans le dossier principal
    documents->ajouter(new Fichier("Planning.txt", 110));

    // Liste des dossiers disponibles
    vector<Dossier*> dossiers = {
        documents, cours, projets
    };

    cout << "===== SYSTEME DE FICHIERS VIRTUEL =====" << endl;

    // Affichage de toute la structure
    cout << "\nStructure des fichiers :" << endl;
    documents->afficher();

    int choix;

    cout << "\n===== CONSULTATION DE LA TAILLE =====" << endl;

    for (int i = 0; i < dossiers.size(); i++)
    {
        cout << i + 1 << ". " << dossiers[i]->nom() << endl;
    }

    cout << "Choisissez un dossier : ";
    cin >> choix;

    if (cin.fail())
    {
        cout << "Saisie invalide." << endl;
        delete documents;
        return 1;
    }

    if (choix >= 1 && choix <= dossiers.size())
    {
        Dossier* selection = dossiers[choix - 1];

        cout << "\nDossier selectionne : "
             << selection->nom() << endl;

        cout << "Taille totale : "
             << selection->taille() << " Ko" << endl;
    }
    else
    {
        cout << "Numero de dossier invalide." << endl;
    }

    // Le dossier principal detruit aussi ses sous-dossiers
    // et les fichiers qu'ils contiennent
    delete documents;
    documents = nullptr;

    // Les pointeurs du vecteur ne sont pas detruits une deuxieme fois
    dossiers.clear();

    cout << "\nStructure liberee de la memoire." << endl;

    return 0;
}
