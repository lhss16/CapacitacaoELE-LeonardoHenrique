#ifndef CALCULATOR_H
#define CALCULATOR_H

//necessario para utilizar o objeto da classe string que contem o valor passado pelo usuario
#include <string>

//input eh um tipo generico para que a Calculator funcione com qualquer numero de entrada
template <typename input>

//classe que contem as operacoes e metodos necessarios para a operacao da Calculator
class Calculator
{
    public:
        //construtor generico de um objeto da classe Calculator
        Calculator();
        //construtor que inicia realizando uma operacao com um operando
        Calculator(char operation, std::string numberA);
        //construtor que inicia realizando uma operacao com dois operandos
        Calculator(char operation, std::string numberA, std::string numberB);
        
        //metodo publico para calculo de uma operacao passada de um operando
        input calc(char operation, input numberA);
        //metodo publico para calculo de uma operacao passada de dois operandos
        input calc(char operation, input numberA, input numberB);

    private:
        //metodo privado que verifica se a entrada eh int (retorna true) ou double (retorna false)
        bool verifyInputIsInt(std::string numberA);
        
        //metodos privados com as operacoes de dois operandos
        input add (input numberA, input numberB);       //x+y
        input sub (input numberA, input numberB);       //x-y
        input multiply (input numberA, input numberB);  //x*y
        input divide (input numberA, input numberB);    //x/y
        input mod(input numberA, input numberB);        //x%y
        input exp(input numberA, input numberB);        //x^y
        input root(input numberA, input numberB);       //x^(1/y)

        //metodos privados com as operacoes de um operando
        input fatorial(input numberA);                  //x*(x-1)*(x-2)....*1
        input fibonacci(input numberA);                 //x(n-1) + x(n-2)
};
#endif