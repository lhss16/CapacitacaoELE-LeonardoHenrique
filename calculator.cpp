#include "calculator.h"

template <typename input>
Calculator<input>::Calculator(){}

template <typename input>
Calculator<input>::Calculator(char operation, std::string numberA)
{

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

}

//metodos privados com as operacoes de dois operandos
template <typename input>
input Calculator<input>::add (input numberA, input numberB)//x+y
{

}       

template <typename input>
input Calculator<input>::sub (input numberA, input numberB)//x-y
{

}

template <typename input>
input Calculator<input>::multiply (input numberA, input numberB)//x*y
{

}

template <typename input>
input Calculator<input>::divide (input numberA, input numberB)//x/y
{

}

template <typename input>    
input Calculator<input>::mod(input numberA, input numberB)//x%y
{

}

template <typename input>
input Calculator<input>::exp(input numberA, input numberB)//x^y
{

}

template <typename input>
input Calculator<input>::root(input numberA, input numberB)//x^(1/y)
{

}

//metodos privados com as operacoes de um operando
template <typename input>
input Calculator<input>::fatorial(input numberA)//x*(x-1)*(x-2)....*1
{

}
template <typename input>
input Calculator<input>::fibonacci(input numberA) //x(n-1) + x(n-2)
{

}