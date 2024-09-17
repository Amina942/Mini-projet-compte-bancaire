#include <iostream>
#include <cmath>
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
    }
    

}
float Compte::Debit()
{
    system("CLS");
    cout<<"  1: Retirer de l'argent"<<endl;
    //cout<<"  2: Retirer de l'argent d'un autre compte"<<endl;
    unsigned int choix;
    cin>>choix;
    if (choix>=1)
    {
        cout<<"\n\tRetirer de l'argent\n\n";
        cout<<"\t\nMontant a retirer : \n\n";
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
    }
    

}
float Compte::Consulter()
{
    system("CLS");
    cout<<"  1: Consulter le solde"<<endl;
    cout<<"  2: Consulter un RIB"<<endl;
    unsigned int choix;
    cin>>choix;
    if (choix>=1)
    {
        cout<<"\n\tConsulter le solde\n\n";
        cout<<"\n Votre solde est : "<<solde<<endl;
        cin>>choix;
        if (choix>=0)
        {
            cout<<"\n\tConsulter un RIB\n\n";
            cout<<"  RIB : "<<RIB<<endl;
        }
        else
        {
            cout<<"\n Erreur \n\n Votre solde est : "<<solde<<endl;
        }
    }
}
float Compte::Virement()
{
    system("CLS");
    cout<<"  1: Virement a un compte existant"<<endl;
    cout<<"  2: Virement a un compte inexistant"<<endl;
    unsigned int choix;
    cin>>choix;
    if (choix>=1)
    {
        cout<<"\n\tVirement a un compte existant\n\n";
        cout<<"\n Votre solde est : "<<solde<<endl;
        cout<<"\n Votre RIB est : "<<RIB<<endl;
        cin>>choix;
     if (choix>=0)
    {
        cout<<"\n\tVirement a un compte inexistant\n\n";
        cout<<"\n Votre solde est : "<<solde<<endl;
        cout<<"\n Votre RIB est : "<<RIB<<endl;
    }
    else
    {
        cout<<"\n Erreur \n\n Votre solde est : "<<solde<<endl;
    }
    }
}
void Compte::Afficher()
{
    cout<<"\n\tAfficher les informations du compte\n\n";
}
