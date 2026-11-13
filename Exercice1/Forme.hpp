
#ifndef FORME_HPP
#define FORME_HPP

class Forme
{
public:
    // Methode virtuelle pure : chaque forme doit calculer sa propre aire
    virtual double aire() const = 0;

    // Destructeur virtuel pour liberer correctement les objets derives
    virtual ~Forme();
};

#endif
