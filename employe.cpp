#include "employe.h"
#include <iostream>
using namespace std;



int employe::setID(int identifiant){

    ID = identifiant;

}


int employe::setTAUX_H(int tauxho){

    taux_r = tauxho;


}
int employe::setMAX_H(int maxh){

    max_H = maxh;

}





void employe::modifier(int identifiant, int tauxho, int maxh)
{
    ID = identifiant;
    taux_r = tauxho;
    max_H = maxh;
    
}


void employe::afficher()
{
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "ID: " << ID <<endl;
    cout << "Taux de remuneration: " << taux_r <<endl;
    cout << "Heures de travail max par semaine: " << max_H <<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    
}

void employe::afficher_user()
{
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "ID: " << ID <<endl;
    cout << "Taux de remuneration: " << taux_r <<endl;
    cout << "Heures de travail max par semaine: " << max_H <<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;

}