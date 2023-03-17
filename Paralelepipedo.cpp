#include "Paralelepipedo.h"

void Paralelepipedo::setAltura(float altura)
{
    if(altura<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->altura=altura;
}

void Paralelepipedo::setComprimento(float comprimento)
{
    if(comprimento<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->comprimento=comprimento;
}

void Paralelepipedo::setLargura(float largura)
{
    if(largura<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->largura=largura;
}

Paralelepipedo::Paralelepipedo(float altura,float largura,float comprimento)
{
    setAltura(altura);
    setLargura(largura);
    setComprimento(comprimento);
}