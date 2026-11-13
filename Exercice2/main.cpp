
#include <iostream>
#include <iomanip>
#include "Paiement.hpp"
#include "PaiementCarte.hpp"
#include "PaiementEspece.hpp"

using namespace std;

int main()
{
    const int nombrePaiements = 5;

    // Tableau de pointeurs vers la classe abstraite Paiement
    Paiement* paiements[nombrePaiements];

    // Creation des differents moyens de paiement
    paiements[0] = new PaiementCarte();
    paiements[1] = new PaiementEspece();
    paiements[2] = new PaiementCarte();
    paiements[3] = new PaiementEspece();
    paiements[4] = new PaiementCarte();

    // Montants associes aux differents paiements
    double montants[nombrePaiements] = {
        245.50, 89.00, 1250.75, 63.25, 410.00
    };

    cout << "===== SIMULATION DES PAIEMENTS =====" << endl;

    // Utilisation du polymorphisme pour effectuer les paiements
    for (int i = 0; i < nombrePaiements; i++)
    {
        cout << "\nTransaction numero " << i + 1 << endl;

        paiements[i]->effectuerPaiement(montants[i]);
    }

    // Liberation de la memoire des objets
    for (int i = 0; i < nombrePaiements; i++)
    {
        delete paiements[i];
        paiements[i] = nullptr;
    }

    cout << "\nToutes les transactions ont ete traitees." << endl;
    cout << "Memoire liberee avec succes." << endl;

    return 0;
}
