# Exercice 1 : Formes géométriques

Figure 1 : Compilation et exécution du programme de calcul des aires
<img width="1920" height="661" alt="Screenshot (1287)" src="https://github.com/user-attachments/assets/0ce19eef-b646-46f0-9218-7790180fccc7" />


Cet exercice met en œuvre une hiérarchie de formes géométriques basée sur une classe abstraite Forme.
La méthode virtuelle pure aire() impose aux classes dérivées de fournir leur propre calcul.
Les classes Cercle et Rectangle redéfinissent cette méthode en utilisant leurs dimensions respectives.
Dans le programme principal, quatre objets sont créés dynamiquement et stockés dans un tableau de pointeurs Forme*.
Le parcours du tableau permet de calculer et d'afficher automatiquement l'aire de chaque forme grâce au polymorphisme.
Enfin, chaque objet est supprimé avec delete afin de libérer correctement la mémoire.

# Exercice 2 : Interface de paiement

Figure 2 : Compilation et exécution de la simulation des moyens de paiement
<img width="1920" height="758" alt="Screenshot (1288)" src="https://github.com/user-attachments/assets/75f197ca-3496-45ad-85af-e631bb40a7e0" />


Cet exercice consiste à simuler différents moyens de paiement à partir d'une classe abstraite Paiement.
La méthode virtuelle pure effectuerPaiement() est redéfinie dans les classes PaiementCarte et PaiementEspece.
Chaque classe affiche un message adapté au moyen de paiement utilisé et au montant de la transaction.
Un tableau de pointeurs vers Paiement permet de regrouper cinq transactions de types différents.
L'appel de la méthode à travers chaque pointeur illustre le fonctionnement du polymorphisme.
Les cinq paiements sont exécutés, puis les objets créés dynamiquement sont libérés avec delete.


# Exercice 3 : Gestion d’animaux

Figure 3 : Compilation et exécution du programme de gestion des animaux
<img width="1920" height="837" alt="Screenshot (1289)" src="https://github.com/user-attachments/assets/e44fc1a5-48b6-42bf-a9ff-357337dc2c35" />


Cet exercice utilise une classe abstraite Animal pour représenter un comportement commun à plusieurs animaux.
La méthode virtuelle pure crier() est redéfinie dans les classes Chien, Chat et Vache.
La méthode concrète info() est héritée par les trois classes et affiche une information commune.
Cinq objets de différents types sont créés et stockés dans un vector<Animal*>.
Le parcours du vecteur permet d'appeler les méthodes info() et crier() sur chaque animal.
Le résultat montre que chaque objet produit son propre cri grâce au polymorphisme.
Enfin, les objets sont détruits individuellement avant de vider le vecteur.

# Exercice 4 : Système de fichiers virtuel

Figure 4 : Compilation et exécution de la structure hiérarchique des fichiers
<img width="1920" height="820" alt="Screenshot (1290)" src="https://github.com/user-attachments/assets/3af59e5b-ddbd-4b27-838d-5559b17f4c13" />

Cet exercice consiste à modéliser un système de fichiers composé de fichiers et de dossiers.
La classe abstraite NoeudFichier définit les méthodes virtuelles pures nom() et taille().
La classe Fichier représente un fichier individuel avec son nom et sa taille.
La classe Dossier contient un vecteur de pointeurs vers NoeudFichier, permettant d'intégrer des fichiers et des sous-dossiers.
La méthode taille() calcule récursivement la somme des tailles de tous les éléments contenus dans un dossier.
Un affichage hiérarchique présente la structure créée, puis l'utilisateur sélectionne un dossier pour consulter sa taille totale.
La mémoire des fichiers et des sous-dossiers est libérée automatiquement par le destructeur du dossier principal.
