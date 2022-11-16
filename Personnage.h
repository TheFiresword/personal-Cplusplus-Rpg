#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include  <string>
#include "Arme.h"
#include <iostream>
class Personnage
{
    // Méthodes
    public:
    Personnage();
    Personnage(std::string nomPerso,std::string nomArme, int degatsArme);
    Personnage(Personnage const& joueur);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherInfosPerso()const;

    // Attributs
    private:
    int m_vie;
    int m_mana;
    Arme* m_arme;
    std::string m_nom;
};

#endif // PERSONNAGE_H_INCLUDED
