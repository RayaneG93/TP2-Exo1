#include "employe.h"
#include <iostream>
using namespace std;

int main()
{
    int i;
    int nbr_empl=0;
    employe em1[100];

    employe Ajouter();

    

    while (i != 5)
    {
        cout << "\n1. Ajouter un employe"<<endl;
        cout << "2. Modifier les donnees d un employe"<<endl;
        cout << "3. Afficher les donnees d un employe"<<endl;
        cout << "4. Afficher les donnees des employes enregistres"<<endl;
        cout << "5. Quitter le menu\n"<<endl;
        cout << "Que voulez-vous faire ?"<<endl;
        cin >> i;
        cout << "\n"<<endl;


        if ( i == 1)
        {
            em1[nbr_empl] = Ajouter();
            nbr_empl++;
        }
        else if (i == 2)
        {
            int modif;
            int identifiant;
            int tauxho;
            int maxh;

            cout << "Quel utilisateur voulez-vous modifier ? \n";
            cin >> modif;

            cout << "Entrer le nouvel identifiant : \n";
            cin >> identifiant;
            cout << "Entrer le nouveau taux de remuneration : \n";
            cin >> tauxho;
            cout << "Entrer le nouveau max d’heures que l’employé doit travailler chaque semaine : \n";
            cin >> maxh;

            
            em1[modif].modifier(identifiant ,tauxho , maxh);
        }
        else if (i == 3)
        {
            int choix;

            cout << "Quel utilisateur voulez-vous afficher ? \n";
            cin >> choix;

            em1[choix].afficher_user();
        }
        else if (i == 4)
        {
            int j;

            for ( j = 0; j < nbr_empl; j++)
            {
                em1[j].afficher();
            }
        }

        cout << "~~~~~~~~~~~~~~~~~~~~  \n";
        cout << "|       BYE !      |  \n";
        cout << "~~~~~~~~~~~~~~~~~~~~  \n\n";
    }




    return 0;

}

employe Ajouter()
{
    employe emp;
    int identifiant;
    int tauxho;
    int maxh;
    
        cout << "Entrer l'identifiant : \n";
        cin >> identifiant;
        emp.setID(identifiant);

        cout << "Entrer le taux de remuneration : \n";
        cin >> tauxho;
        emp.setMAX_H(tauxho);

        cout << "Entrer le maximum d’heures que l’employé doit travailler chaque semaine : \n";
        cin >> maxh;
        emp.setTAUX_H(maxh);

        cout << "\n";

        return emp;
    
}