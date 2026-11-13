
#include "PaiementCarte.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

// Simule un paiement par carte bancaire
void PaiementCarte::effectuerPaiement(double montant) const
{
    cout << fixed << setprecision(2);
    cout << "Paiement de " << montant
         << " DH par carte bancaire." << endl;
}
