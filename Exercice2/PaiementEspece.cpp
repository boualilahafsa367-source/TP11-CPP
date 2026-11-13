
#include "PaiementEspece.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

// Simule un paiement en especes
void PaiementEspece::effectuerPaiement(double montant) const
{
    cout << fixed << setprecision(2);
    cout << "Paiement de " << montant
         << " DH en especes." << endl;
}
