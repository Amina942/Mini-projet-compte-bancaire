#include <iostream>
#include <cmath>
using namespace std;
class Client
{
    private:
    char *identifiant;
    char *nom;
    char *prenom;
    double numero;
    double solde;
    char *RIB;
    public:
    Client(char *,char *,char *,double, double,char *);
    float Consulter();
    float Virement();
    float Commander();
    void Afficher();
};