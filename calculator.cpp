#include <cmath>
#include "calculator.h"

Calculator::Calculator(){}

Calculator::Calculator(char operation, std::string numberA)
{
    char validOperations[3] = {'f','r','c'};
    for(unsigned long int counter{0}; counter < 3; counter++)
    {
    }
    /*
    if (verifyIsInt == true)
    {
            calc(operation, numberA);
    }*/
}

//construtor que inicia realizando uma operacao com dois operandos
Calculator::Calculator(char operation, std::string numberA, std::string numberB)
{

}

//metodo publico para calculo de uma operacao passada de um operando
unsigned int
Calculator::calc(char operation, unsigned int numberA)
{

    
}
double
Calculator::calc(char operation, double numberA)
{

    
}

//metodo publico para calculo de uma operacao passada de dois operandos
int
Calculator::calc(char operation, int numberA, int numberB)
{

}
double
Calculator::calc(char operation, double numberA, double numberB)
{

}

//metodo privado que verifica se a entrada eh int (retorna true) ou double (retorna false)
bool Calculator::verifyIsInt(std::string numberA)
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