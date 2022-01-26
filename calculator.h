#ifndef CALCULATOR_H
#define CALCULATOR_H

//classe que contem as operacoes e metodos necessarios para a operacao da Calculator
class Calculator
{
    public:
        //metodo publico para calculo de uma operacao passada de um operando
        unsigned int calc(unsigned int numberA, char operation);
        double calc(double numberA, char operation);
        //metodo publico para calculo de uma operacao passada de dois operandos
        int calc(int numberA, char operation, int numberB);
        double calc(double numberA, char operation, double numberB);
};
#endif