#include <iostream>
#include "Personnage.h"
#include <string>
#include "Arme.h"

using namespace std;

int main()
{
   string namePerso("");

    Personnage ribokou("ribokou-sama","epee",10),shin("shin","epee",10),ousen(ribokou);

    ribokou.afficherInfosPerso();
    shin.afficherInfosPerso();

    ousen.changerArme("Marteau tyrailleur",50);
        ousen.afficherInfosPerso();
    shin.attaquer(ribokou);
    ribokou.boirePotionDeVie(10);
    ribokou.attaquer(shin);
    shin.afficherInfosPerso();
    ribokou.afficherInfosPerso();
    ribokou.afficherInfosPerso();
    shin.changerArme("Glaive d'Ouki",100);
    shin.afficherInfosPerso();
    shin.attaquer(ribokou);
    ribokou.afficherInfosPerso();

    return 0;
}
