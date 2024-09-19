#include <iostream>
#include <cmath>
using namespace std;
class Clien
{
    private:
    char *identifiant;
    char *nom;
    char *prenom;
    double numero;
    double solde;
    public:
    Clien(char *,char *,char *,double,double);
    float Consulter();
    void Afficher();
};