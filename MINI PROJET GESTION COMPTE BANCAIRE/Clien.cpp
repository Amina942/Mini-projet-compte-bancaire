#include <iostream>
#include <cmath>
#include "Clien.h"
#include "Compte.h"
using namespace std;

Clien::Clien(char *id,char *N,char *P,double num,double sld)
{
    identifiant = id;
    nom = N;
    prenom = P;
    numero = num;
    solde = sld;
}


