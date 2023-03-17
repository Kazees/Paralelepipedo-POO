#include <iostream>
#include "Paralelepipedo.h"
#include "Paralelepipedo.cpp"
#include <iomanip>

using namespace std;

int main()
{
    float comprimento,largura,altura;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite o valor da altura: ";
        cin>>altura;

        cout<<"Digite o valor da largura: ";
        cin>>largura;

        cout<<"Digite o valor do comprimento: ";
        cin>>comprimento;

        try
        {
            Paralelepipedo n1(altura,largura,comprimento);
            cout<<fixed<<setprecision(2);
            cout<<"Area: "<<n1.calcularArea()<<endl;
            cout<<"Volume: "<<n1.calcularVolume()<<endl;
            conti=false;
        }

        catch(invalid_argument &ex)
        {
            cout<<"Erro: "<<ex.what()<<endl;
            conti=true;
        }
    }

    return 0;
}