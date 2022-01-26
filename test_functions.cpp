#include <iostream>
#include "calculator.h"

using namespace std;

int
main()
{
    Calculator calculadora;

    cout << calculadora.calc(2.5, 'r') << endl;

    return 0;
}