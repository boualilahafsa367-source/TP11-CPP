
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
public:
    // Chaque animal doit definir son propre cri
    virtual void crier() const = 0;

    // Methode commune a tous les animaux
    void info() const;

    // Destructeur virtuel
    virtual ~Animal();
};

#endif
