
#ifndef VACHE_HPP
#define VACHE_HPP

#include "Animal.hpp"

class Vache : public Animal
{
public:
    // Redefinition du comportement sonore
    void crier() const override;
};

#endif
