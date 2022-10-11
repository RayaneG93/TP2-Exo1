#ifndef EMPLOYE_H
#define EMPLOYE_H

class employe
{
    private:
    int ID;
    double taux_r;
    double max_H;

    public:

    employe(int identifiant, double to, double maximunH)
    {
        ID = identifiant;
        taux_r = to;
        max_H = maximunH;
    }

    employe(){}

    int setID(int identifiant);
    int setTAUX_H(int tauxho);
    int setMAX_H(int maxh);

    void modifier(int identifiant, int tauxho, int maxh);
    void afficher();
    void afficher_user();
    
};

#endif