#include <iostream>
//#include <cmath>
#include "Compte.h"
using namespace std;
Compte::Compte(char *id,char *N,char *P,double num,double sld,char *rib)
{
    identifiant = id;
    nom = N;
    prenom = P;
    numero = num;
    solde = sld;
    RIB = rib;
}
float Compte::Credit()
{
    system("CLS");
    cout<<" 1: Deposer  de l'argent"<<endl;
    cout<<" 2: Crediter un autre compte"<<endl;
    cout<<" 3: Retour \n\n Choix : ";
    unsigned int choix;
    cin>>choix;
    if (choix>=1)
    {
       cout<<"\n\tDeposer de l'argent\n\n";
       cout<<"\t\nMontant a deposer : \n\n";
       cin>>choix;
       if (choix>=0)
       {
            solde=solde+choix;
            cout<<"\n Solde ajouter\n\n Votre solde s'eleve  a : "<<solde<<endl;
       }
       else
       {
            cout<<"\n Erreur \n\n Votre solde est : "<<solde<<endl;
       }
       choix = 0;
       system("pause");
    }
    else if (choix == 2)
    {
        system("CLS");
        cout<<" Crediter un compte existant "<<endl;
        cout<<"\t\n Quel compte voulez vous creditez ? Entrer le Nom \n\n";
        string autre ;
        cin>>autre;
        system("CLS");
        cout<<"\t\n Combien voulez vous credite ? \n\n";
        cin>>choix;
        if (choix>=0)
        {
            system("CLS");
            solde=solde+choix;
            cout<<"\n Solde ajouter\n\n Votre solde s'eleve  a"<<solde<<"e\n";
        }
        else
        {
            system("CLS");
            cout<<"\n Erreur \n\n Votre solde est : "<<solde<<endl;
        }
        system("CLS");    
    }
    return 0;
}
float Compte::Debit()
{
    system("CLS");
    cout<<"\n\t Debiter"<<endl;
    cout<<" Combien voulez vous retirer ?"<<endl;
    int choix;
    cin>>choix;
        if (choix>=0)
        {
            solde=solde-choix;
            cout<<"\n Solde retirer\n\n Votre solde s'eleve  a : "<<solde<<endl;
        }
        else
        {
            cout<<"\n Erreur \n\n Votre solde est : "<<solde<<endl;
        }
        choix = 0;
        return 0;
}

float Compte::Consulter()
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
float Compte::Virement()
{
    system("CLS");
    cout<<" Quel compte voulez vous creditez"<<endl;
    string autre;
    cin>>autre;
    system("CLS");
    cout<<"Montznt du virement : ";
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
void Compte::Afficher()
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
            Credit();
            break;
        case 2:
            Debit();
            break;
        case 3:
            Virement();
            break;
        case  4:
            Consulter();
            break;
        case  5:
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
