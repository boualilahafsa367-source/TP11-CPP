
#include "Animal.hpp"
#include <iostream>
using namespace std;

// Affiche une information commune a tous les animaux
void Animal::info() const
{
    cout << "Je suis un animal." << endl;
}

// Definition du destructeur virtuel
Animal::~Animal()
{
}
