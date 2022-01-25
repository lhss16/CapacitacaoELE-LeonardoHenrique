#include <cmath>
#include "calculator.h"

template <typename input>
Calculator<input>::Calculator(){}

template <typename input>
Calculator<input>::Calculator(char operation, std::string numberA)
{
    char validOperations[3] = {'f','r','c'};
    for(unsigned long int counter{0}; counter < 3; counter++)
    {
    }
    if (verifyInputIsInt == true)
    {
            calc(operation, numberA);
    }
}

//construtor que inicia realizando uma operacao com dois operandos
template <typename input>
Calculator<input>::Calculator(char operation, std::string numberA, std::string numberB)
{

}

//metodo publico para calculo de uma operacao passada de um operando
template <typename input>
input Calculator<input>::calc(char operation, input numberA)
{

    
}

//metodo publico para calculo de uma operacao passada de dois operandos
template <typename input>
input Calculator<input>::calc(char operation, input numberA, input numberB)
{

}

//metodo privado que verifica se a entrada eh int (retorna true) ou double (retorna false)
template <typename input>
bool Calculator<input>::verifyInputIsInt(std::string numberA)
{
    for(unsigned long int counter{0}; counter < numberA.size(); counter++)
    {
        if (numberA.at(counter) == '.')
        {
            return false;
        }
    }
    return true;
}

//metodos privados com as operacoes de dois operandos
template <typename input>
input Calculator<input>::add (input numberA, input numberB)//x+y
{
    return (numberA+numberB);
}       

template <typename input>
input Calculator<input>::sub (input numberA, input numberB)//x-y
{
    return (numberA-numberB);
}

template <typename input>
input Calculator<input>::multiply (input numberA, input numberB)//x*y
{
    return (numberA*numberB);
}

template <typename input>
input Calculator<input>::divide (input numberA, input numberB)//x/y
{
    return (numberA/numberB);
}

template <typename input>    
input Calculator<input>::mod(input numberA, input numberB)//x%y
{
    return (numberA%numberB);
}

template <typename input>
input Calculator<input>::exp(input numberA, input numberB)//x^y
{
    return (std::pow(numberA, numberB));
}

//metodos privados com as operacoes de um operando
template <typename input>
input Calculator<input>::fatorial(input numberA)//x*(x-1)*(x-2)....*1
{
    input result{1};
    for(input counter{numberA}; counter >= 1; counter--)
    {
        result *= counter;
    }
    return result;
}

template <typename input>
input Calculator<input>::root(input numberA)//x^(1/2)
{
    return (std::sqrt(numberA));
}

template <typename input>
input Calculator<input>::fibonacci(input numberA) //x(n-1) + x(n-2)
{
    if(numberA == 0)
        return 0;
    if(numberA == 1)
        return 1;
    return fibonacci(numberA-1)+fibonacci(numberA-2);
}