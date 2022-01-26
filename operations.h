/*
Definicao de funcoes matematicas templates

Desenvolvido por: Leonardo Henrique Souza da Silva
*/

#include <cmath>
#include <limits>

template <class typeNumber>
typeNumber add(typeNumber numberA, typeNumber numberB)
{
    return (numberA+numberB);
}

template <class typeNumber>
typeNumber sub(typeNumber numberA, typeNumber numberB)
{
    return (numberA-numberB);
}

template <class typeNumber>
typeNumber multiply(typeNumber numberA, typeNumber numberB)
{
    return (numberA*numberB);
}

template <class typeNumber>
typeNumber divide(typeNumber numberA, typeNumber numberB)
{
    if(numberB == 0)
    {
        return std::numeric_limits<typeNumber>::max();
    }
    return (numberA/numberB);
}

template <class typeNumber>
typeNumber mod(typeNumber numberA, typeNumber numberB)
{
    if(numberB == 0)
    {
        return std::numeric_limits<typeNumber>::max();
    }
    return (numberA%numberB);
}


template <class typeNumber>
typeNumber exp(typeNumber numberA, typeNumber numberB)
{
    return (std::pow(numberA, numberB));
}

template <class typeNumber>
typeNumber root(typeNumber numberA)
{
    return (std::sqrt(numberA));
}

template <class typeNumber>
typeNumber fatorial(typeNumber numberA)//x*(x-1)*(x-2)....*1
{
    typeNumber result{1};
    for(typeNumber counter{numberA}; counter >= 1; counter--)
    {
        result *= counter;
    }
    return result;
}

template <class typeNumber>
typeNumber fibonacci(typeNumber numberA) //x(n-1) + x(n-2)
{
    if(numberA == 0)
        return 0;
    if(numberA == 1)
        return 1;
    return fibonacci(numberA-1)+fibonacci(numberA-2);
}