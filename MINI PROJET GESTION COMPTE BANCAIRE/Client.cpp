#include <iostream>
#include <cmath>
#include "Client.h"
#include "Compte.h"
using namespace std;

Client::Client(char *id,char *N,char *P,double num,double sld,char *rib)
{
    identifiant = id;
    nom = N;
    prenom = P;
    numero = num;
    solde = sld;
    RIB = rib;
}

float Client::Consulter()
{
    system("CLS");
    cout<<"\n\t Consulter les information du compte"<<endl;
    cout<<"  1: Consulter le solde"<<endl;
    cout<<"  2: Consulter un RIB"<<endl;
    cout<<"Retour\n\n";
    int choix;
    cin>>choix;
    switch (choix)
    {
    case 1:
        system("CLS");
        cout<<"\n\t Consulter le solde"<<endl;
        cout<<"  Votre solde est : "<<solde<<endl;
        system("pause");
        break;
    case 2:
        system("CLS");
        cout<<"\n\t Consulter un RIB"<<endl;
        cout<<"  RIB : "<<RIB<<endl;
        system("pause");
        break;
    default:
        break;
    } 
  
}

float Client::Virement()
{
    system("CLS");
    cout<<" Quel compte voulez vous creditez"<<endl;
    string autre;
    cin>>autre;
    system("CLS");
    cout<<"Montant du virement : ";
    double choixV;
    cin>>choixV;
    if (choixV>=0)
    {
        system("CLS");
        solde=solde-choixV;
        cout<<" Virement effectue avec succes"<<endl;
        cout<<" Votre solde est : "<<solde<<endl;
    }
    else
    {
        cout<<"\n Erreur \n\n Votre solde est : "<<solde<<endl;
    }
    choixV = 0;
    system("pause");
}
void Client::Afficher()
{
    int cpt=1;
    while (cpt !=0)
    {
        system("CLS");
        cout<<"\n\t Menu"<<endl;
        cout<<"1. Crediter votre compte"<<nom<<" "<<prenom<<endl;
        cout<<"2. Debiter  votre compte"<<endl;
        cout<<"3. Virement"<<endl;
        cout<<"4. Consulter les information du compte"<<endl;
        cout<<"5. Quitter \n\n choix :  ";
        int choix;
        cin>>choix;
        switch (choix)
        {
        case 1:
            Virement();
            break;
        case  2:
            Consulter();
            break;
        case  3:
            cpt=0;
            break;
        default:
            system("CLS");
            cout<<"\n Erreur \n\n ";
            choix=0;
            system("pause");
            break;
        }
    }
}
