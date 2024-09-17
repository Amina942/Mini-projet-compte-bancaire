#include <iostream>
#include <cmath>
using namespace std;
class Compte
{
    private:
    char *identifiant;
    char *nom;
    char *prenom;
    double numero;
    double solde;
    char *RIB;
    public:
    Compte(char *,char *,char *,double, double,char *);
    float Credit();
    float Debit();
    float Consulter();
    float Virement();
    float Commander();
    void Afficher();
};