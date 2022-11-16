#include "Personnage.h"
#include <string>
#include <iostream>

using namespace std;


 void Personnage::recevoirDegats(int nbDegats)
 {
     m_vie-=nbDegats;
     if(m_vie<0)
     {
         m_vie=0;
     }
 }

    void Personnage::attaquer(Personnage &cible)
    {
        cible.recevoirDegats(m_arme->getDegats());
    }

    void Personnage::boirePotionDeVie(int quantitePotion)
    {
        m_vie+=quantitePotion;
        if(m_vie>100)
        {
            m_vie=100;
        }
    }

    void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
    {
       m_arme->changer(nomNouvelleArme,degatsNouvelleArme);
    }

    bool Personnage::estVivant() const
    {
       return (m_vie>0);
    }

     void Personnage::afficherInfosPerso()const
     {
         cout <<m_nom<<" a " <<m_vie<<" vies et: "<<m_mana<<" mana"<<endl;
         m_arme->afficher();
         if(m_vie==0){ cout<<m_nom<<" est mort"<<endl ;  }
     }

     Personnage::Personnage():m_vie(100),m_mana(150),m_nom("Firesword")
     {
         m_arme=new Arme();
     }

      Personnage::Personnage(string nomPerso,string nomArme, int degatsArme):m_vie(100),m_mana(150),m_arme(0),m_nom(nomPerso)
      {
          m_arme=new Arme();
      }
  Personnage::Personnage(Personnage const& joueur)
     {
         m_nom=joueur.m_nom;
         m_vie=joueur.m_vie;
         m_mana=joueur.m_mana;
         m_arme=new Arme(*(joueur.m_arme));
     }
      Personnage::~Personnage()
      {
          delete m_arme;
      }
