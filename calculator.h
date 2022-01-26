#ifndef CALCULATOR_H
#define CALCULATOR_H

//necessario para utilizar o objeto da classe string que contem o valor passado pelo usuario
#include <string>

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

    private:
        //metodos privados com as operacoes de dois operandos
        int add (int numberA, int numberB);       //x+y
        int sub (int numberA, int numberB);       //x-y
        int multiply (int numberA, int numberB);  //x*y
        int divide (int numberA, int numberB);    //x/y
        int mod(int numberA, int numberB);        //x%y
        int exp(int numberA, int numberB);        //x^y

        double add (double numberA, double numberB);       //x+y
        double sub (double numberA, double numberB);       //x-y
        double multiply (double numberA, double numberB);  //x*y
        double divide (double numberA, double numberB);    //x/y
        double exp(double numberA, double numberB);        //x^y
        
        //metodos privados com as operacoes de um operando
        unsigned int root(unsigned int numberA);       //x^(1/2)
        double root(double numberA);       //x^(1/2)
        unsigned int fatorial(unsigned int numberA);                  //x*(x-1)*(x-2)....*1
        unsigned int fibonacci(unsigned int numberA);                 //x(n-1) + x(n-2)
};
#endif