#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H
#include <stdexcept>

using std::invalid_argument;

class Paralelepipedo
{
    private:
        float altura;
        float comprimento;
        float largura;

    public:
        Paralelepipedo(float altura,float largura,float comprimento);

        void setAltura(float altura);
        void setComprimento(float comprimento);
        void setLargura(float largura);

        float getAltura()const {return altura;}
        float getComprimento()const {return comprimento;}
        float getLargura()const {return largura;}

        float calcularArea()const {return 2*(altura*largura+altura*comprimento+largura*comprimento);}
        float calcularVolume()const {return altura*comprimento*largura;}
};

#endif