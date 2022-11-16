#include <string>
#include <iostream>
#include "Arme.h"
#include <string>
using namespace std;

    Arme::Arme():m_nom("Glaive des saints cieux"),m_degats(10)
{

}
    Arme::Arme(std::string nom, int degats):m_nom(nom),m_degats(degats)
    {

    }

    int Arme::getDegats()const
    {
        return m_degats;
    }

    void Arme::changer(std::string nom, int degats)
    {
        m_nom=nom;
        m_degats=degats;
    }
    void  Arme::afficher() const
    {
        cout <<"Arme: "<<m_nom <<" Degats: "<<m_degats<<endl;
    }
