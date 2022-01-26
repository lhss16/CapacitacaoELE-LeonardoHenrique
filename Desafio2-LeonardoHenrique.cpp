#include<sstream>
#include<iostream>
#include<string>
#include "calculator.h"

using namespace std;

template <class typeNumber>
typeNumber evaluateNumber(typeNumber number)
{
    cin >> number;
    if (cin.fail()) //corrige a entrada do usuario para que entre com um valor numerico
    {
        while (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Voce errou... Entre com o valor permitido! Por favor, entrar com uma opcao valida." << endl;
            cin >> number;
        }
    }
    return number; 
}

int
main()
{
    bool sair = false;
    do
    {
        cout << "Menu" << endl;
        cout << "Selecione entre uma das opcoes abaixo:\n" << endl;
        cout << "1 - Somar" << endl;
        cout << "2 - Subtrair" << endl;
        cout << "3 - Multiplicar" << endl;
        cout << "4 - Dividir" << endl;
        cout << "5 - Resto de uma divisão" << endl;
        cout << "6 - Calcular exponecial" << endl;
        cout << "7 - Raiz quadrada" << endl;
        cout << "8 - Fatorial" << endl;
        cout << "9 - Fibonacci" << endl;
        cout << "0 - Sair" << endl;

        bool respostaValida = false;
        string resposta;

        unsigned int optionIn{0};
        optionIn = evaluateNumber(optionIn);

        switch (optionIn)
        {
            case 1:
                Calculator calculadora;
                cout << "Entre com o primeiro numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: \n" << endl;
                double numberB{0};
                numberB = evaluateNumber(numberB);            
                cout << numberA << "+" << numberB << " = " <<
                calculadora.calc(numberA, '+', numberB) << endl;
                break;
            case 2:
                Calculator calculadora;
                cout << "Entre com o primeiro numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: \n" << endl;
                double numberB{0};
                numberB = evaluateNumber(numberB);            
                cout << numberA << "-" << numberB << " = " <<
                calculadora.calc(numberA, '-', numberB) << endl;
                break;
            case 3:
                Calculator calculadora;
                cout << "Entre com o primeiro numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: \n" << endl;
                double numberB{0};
                numberB = evaluateNumber(numberB);            
                cout << numberA << "*" << numberB << " = " <<
                calculadora.calc(numberA, '*', numberB) << endl;
                break;
            case 4:
                Calculator calculadora;
                cout << "Entre com o primeiro numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: \n" << endl;
                double numberB{0};
                numberB = evaluateNumber(numberB);            
                cout << numberA << "/" << numberB << " = " <<
                calculadora.calc(numberA, '/', numberB) << endl;
                break;
            case 5:
                Calculator calculadora;
                cout << "Entre com o primeiro numero da operacao: \n" << endl;
                int numberA{0};
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: \n" << endl;
                int numberB{0};
                numberB = evaluateNumber(numberB);            
                cout << numberA << "%" << numberB << " = " <<
                calculadora.calc(numberA, '%', numberB) << endl;
                break;
            case 6:
                Calculator calculadora;
                cout << "Entre com o primeiro numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: \n" << endl;
                double numberB{0};
                numberB = evaluateNumber(numberB);            
                cout << numberA << "^(" << numberB << ") = " <<
                calculadora.calc(numberA, '^', numberB) << endl;
                break;
            case 7:
                Calculator calculadora;
                cout << "Entre com o numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);            
                cout << numberA << "^(1/2)" << " = " <<
                calculadora.calc(numberA, 'r') << endl;
                break;
            case 8:
                Calculator calculadora;
                cout << "Entre com o numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);            
                cout << numberA << "!" << " = " <<
                calculadora.calc(numberA, '!') << endl;
                break;
            case 9:
                Calculator calculadora;
                cout << "Entre com o numero da operacao: \n" << endl;
                double numberA{0};
                numberA = evaluateNumber(numberA);            
                cout << "Fibonacci(" << numberA  << ") = " <<
                calculadora.calc(numberA, 'f') << endl;
                break;
            case 0:
                respostaValida = true;
                resposta = "N";
                break;
            default:
                cout << "Ops... Nao eh uma opcao que consta no menu....." << endl;
                break;
        }

        while(respostaValida == false)
        {
            getline(cin, resposta);
            cout << "Deseja continuar no programa e realizar mais operações? (S/N)" << endl;
            if(resposta.compare("S") == 0 || resposta.compare("N") == 0)
            {
                respostaValida = true;
            }
            else
            {
                cout << "Responde com S ou N, por favor" << endl;
            }
        }

        if(resposta.compare("N") == 0)
        {
            cout << "Ok!\n" << endl;
            cout << "See you space cowboy..." << endl;
            sair = true;
        }
    } while (sair == false);
    return 0;
}