
#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Chien.hpp"
#include "Chat.hpp"
#include "Vache.hpp"

using namespace std;

int main()
{
    // Vecteur contenant des pointeurs vers la classe abstraite Animal
    vector<Animal*> animaux;

    // Creation de plusieurs animaux de types differents
    animaux.push_back(new Chien());
    animaux.push_back(new Chat());
    animaux.push_back(new Vache());
    animaux.push_back(new Chien());
    animaux.push_back(new Chat());

    cout << "===== PRESENTATION DES ANIMAUX =====" << endl;

    // Parcours du vecteur et appel des methodes
    for (int i = 0; i < animaux.size(); i++)
    {
        cout << "\nAnimal numero " << i + 1 << endl;

        // Methode commune a tous les animaux
        animaux[i]->info();

        // Methode adaptee au type reel de l'animal
        animaux[i]->crier();
    }

    // Liberation de la memoire de chaque animal
    for (int i = 0; i < animaux.size(); i++)
    {
        delete animaux[i];
    }

    // Vide le vecteur apres la liberation des objets
    animaux.clear();

    cout << "\nTous les animaux ont ete liberes." << endl;

    return 0;
}
