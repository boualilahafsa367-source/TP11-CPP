
#ifndef CHAT_HPP
#define CHAT_HPP

#include "Animal.hpp"

class Chat : public Animal
{
public:
    // Redefinition du comportement sonore
    void crier() const override;
};

#endif
