
#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"

class Chien : public Animal
{
public:
    // Redefinition du comportement sonore
    void crier() const override;
};

#endif
