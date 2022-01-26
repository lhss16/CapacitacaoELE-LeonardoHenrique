/*
Descrição: Implementação da classe Calculator que possui diversas funcoes
de uma calculadora.

Funcionamento basico é a entrada da operacoa e os operandos e retornando o valor

Desenvolvido por: Leonardo Henrique Souza da Silva
*/
#include "calculator.h"  //definicao da classe calculator definida aqui
#include "operations.h"  //funcoes templates utilizadas nesta classe

//metodo publico para calculo de uma operacao passada de um operando
unsigned int
Calculator::calc(unsigned int numberA, char operation)
{
    if(operation == '!')
    {
        return fatorial(numberA); 
    }
    else if(operation == 'f')
    {
        return fibonacci(numberA);
    }
    else if(operation == 'r')
    {
        return root(numberA);
    }
    else
    {
        return 0;
    }  

}
double
Calculator::calc(double numberA, char operation)
{
    if(operation == 'r')
    {
        return root(numberA);
    }
    else
    {
        return 0;
    }  
}

//metodo publico para calculo de uma operacao passada de dois operandos
int
Calculator::calc(int numberA, char operation, int numberB)
{
    if(operation == '+')
    {
        return add(numberA, numberB);
    }
    else if(operation == '-')
    {
        return sub(numberA, numberB);
    }
    else if(operation == '*')
    {
        return multiply(numberA, numberB);
    }
    else if(operation == '/')
    {
        return divide(numberA, numberB);
    }
    else if(operation == '%')
    {
        return mod(numberA, numberB);
    }
    else if(operation == '^')
    {
        return exp(numberA, numberB);
    }
    else
    {
        return 0;
    }  
}
double
Calculator::calc(double numberA, char operation, double numberB)
{
    if(operation == '+')
    {
        return add(numberA, numberB);
    }
    else if(operation == '-')
    {
        return sub(numberA, numberB);
    }
    else if(operation == '*')
    {
        return multiply(numberA, numberB);
    }
    else if(operation == '/')
    {
        return divide(numberA, numberB);
    }
    else if(operation == '^')
    {
        return exp(numberA, numberB);
    }
    else
    {
        return 0;
    }  
}