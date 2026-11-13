
#include <iostream>
#include <iomanip>
#include "Forme.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"

using namespace std;

int main()
{
    const int nombreFormes = 4;

    // Tableau de pointeurs vers la classe abstraite Forme
    Forme* formes[nombreFormes];

    // Creation des objets avec des dimensions personnalisees
    formes[0] = new Cercle(4.5);
    formes[1] = new Rectangle(8.0, 3.5);
    formes[2] = new Cercle(2.8);
    formes[3] = new Rectangle(6.2, 4.0);

    cout << "===== CALCUL DES AIRES DES FORMES =====" << endl;

    // Affichage avec deux chiffres apres la virgule
    cout << fixed << setprecision(2);

    for (int i = 0; i < nombreFormes; i++)
    {
        cout << "\nForme numero " << i + 1 << endl;
        cout << "Aire : " << formes[i]->aire() << endl;
    }

    // Liberation de la memoire de chaque objet
    for (int i = 0; i < nombreFormes; i++)
    {
        delete formes[i];
        formes[i] = nullptr;
    }

    cout << "\nTous les objets ont ete liberes." << endl;

    return 0;
}
