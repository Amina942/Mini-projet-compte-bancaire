#include <iostream>
#include <cmath>
#include "Compte.cpp"
#include "Clien.cpp"
using namespace std;
main()
{
    system("CLS");
    Compte Compte("FR-AAAC91711G210","BENBADRA","Amina",123456789,100,"FR76 3000 4028 3798  0000 0123 4567");
    int cpt=0;
    while (cpt!=3)
    {
        system("CLS");
        cout<<"\n\tEntrer le code de securite : ";
        int code;
        cin>>code;
        if (code==1234)
        {
            system("CLS");
            cout<<"\n\tBienvenue\n\n\n";
            system("pause");
            Compte.Afficher();
            return 0;
        }
        else
        {
            system("CLS");
            cout<<"\n\tCode de securite incorrect\n\n\n";
            system("pause");
            cpt++;
        }
        return 0;
    }


}
