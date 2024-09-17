#include <iostream>
#include <cmath>
using namespace std;
class Compte
{
    private:
    char *identifiant;
    char *nom;
    char *prenom;
    int numero;
    int solde;
    public:
    Compte(char *,char *,char *,int, int);
    float Credit();
    float Debit();
    float Consulter();
    float Virement();
    void Afficher();
};