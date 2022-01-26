#include <sstream>
#include <cmath>
#include "calculator.h"

//metodo publico para calculo de uma operacao passada de um operando
unsigned int
Calculator::calc(unsigned int numberA, char operation)
{
    if(operation == '!')
    {
        return fatorial(numberA); 
    }
    if(operation == 'f')
    {
        return fibonacci(numberA);
    }
    if(operation == 'r')
    {
        return root(numberA);
    }
}
double
Calculator::calc(double numberA, char operation)
{
    if(operation == 'r')
    {
        return root(numberA);
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
    if(operation == '-')
    {
        return sub(numberA, numberB);
    }
    if(operation == '*')
    {
        return multiply(numberA, numberB);
    }
    if(operation == '/')
    {
        return divide(numberA, numberB);
    }
    if(operation == '%')
    {
        return mod(numberA, numberB);
    }
    if(operation == '^')
    {
        return exp(numberA, numberB);
    }
}
double
Calculator::calc(double numberA, char operation, double numberB)
{
    if(operation == '+')
    {
        return add(numberA, numberB);
    }
    if(operation == '-')
    {
        return sub(numberA, numberB);
    }
    if(operation == '*')
    {
        return multiply(numberA, numberB);
    }
    if(operation == '/')
    {
        return divide(numberA, numberB);
    }
    if(operation == '^')
    {
        return exp(numberA, numberB);
    }
}

//metodos privados com as operacoes de dois operandos
int
Calculator::add(int numberA, int numberB)//x+y
{
    return (numberA+numberB);
}       
double
Calculator::add(double numberA, double numberB)//x+y
{
    return (numberA+numberB);
}

int
Calculator::sub(int numberA, int numberB)//x-y
{
    return (numberA-numberB);
}
double
Calculator::sub(double numberA, double numberB)//x-y
{
    return (numberA-numberB);
}

int 
Calculator::multiply(int numberA, int numberB)//x*y
{
    return (numberA*numberB);
}
double 
Calculator::multiply(double numberA, double numberB)//x*y
{
    return (numberA*numberB);
}

int
Calculator::divide (int numberA, int numberB)//x/y
{
    return (numberA/numberB);
}
double
Calculator::divide (double numberA, double numberB)//x/y
{
    return (numberA/numberB);
}

int   
Calculator::mod(int numberA, int numberB)//x%y
{
    return (numberA%numberB);
}

int
Calculator::exp(int numberA, int numberB)//x^y
{
    return (std::pow(numberA, numberB));
}
double
Calculator::exp(double numberA, double numberB)//x^y
{
    return (std::pow(numberA, numberB));
}

//metodos privados com as operacoes de um operando
unsigned int
Calculator::fatorial(unsigned int numberA)//x*(x-1)*(x-2)....*1
{
    unsigned int result{1};
    for(unsigned int counter{numberA}; counter >= 1; counter--)
    {
        result *= counter;
    }
    return result;
}

unsigned int
Calculator::root(unsigned int numberA)//x^(1/2)
{
    return (std::sqrt(numberA));
}

double
Calculator::root(double numberA)//x^(1/2)
{
    return (std::sqrt(numberA));
}

unsigned int
Calculator::fibonacci(unsigned int numberA) //x(n-1) + x(n-2)
{
    if(numberA == 0)
        return 0;
    if(numberA == 1)
        return 1;
    return fibonacci(numberA-1)+fibonacci(numberA-2);
}