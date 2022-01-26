/*
Descrição: interface com o usuario para utilizacao da classe Calculator
Implementa um menu de interação que busca a operacao que o usuario deseja
E os operandos para ser manipulados pela classe Calculator

Desenvolvido por: Leonardo Henrique Souza da Silva
*/

#include<sstream>    //utilizacao para conversao da entrada string para double/int
#include<iostream>   //interfaceamento com o usuario atraves da CLI
#include<string>     //manuseio de strings
#include "calculator.h" //utilizacao da classe Calculator

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
    Calculator calculadora;
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

        double numberA{0};
        double numberB{0};

        int numberAInt{0};
        int numberBInt{0};

        unsigned int numberAUnsigned{0};

        switch (optionIn)
        {
            case 1:
                cout << "Entre com o primeiro numero da operacao: " << endl;
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: " << endl;
                numberB = evaluateNumber(numberB);            
                cout << numberA << "+" << numberB << " = " <<
                calculadora.calc(numberA, '+', numberB) << endl;
                break;
            case 2:
                cout << "Entre com o primeiro numero da operacao: " << endl;
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: " << endl;
                numberB = evaluateNumber(numberB);            
                cout << numberA << "-" << numberB << " = " <<
                calculadora.calc(numberA, '-', numberB) << endl;
                break;
            case 3:
                cout << "Entre com o primeiro numero da operacao: " << endl;
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: " << endl;
                numberB = evaluateNumber(numberB);            
                cout << numberA << "*" << numberB << " = " <<
                calculadora.calc(numberA, '*', numberB) << endl;
                break;
            case 4:
                cout << "Entre com o primeiro numero da operacao: " << endl;
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: " << endl;
                numberB = evaluateNumber(numberB);            
                cout << numberA << "/" << numberB << " = " <<
                calculadora.calc(numberA, '/', numberB) << endl;
                break;
            case 5:
                cout << "Entre com o primeiro numero da operacao: " << endl;
                numberAInt = evaluateNumber(numberAInt);
                cout << "Entre com o segundo numero da operacao: " << endl;
                numberBInt = evaluateNumber(numberBInt);            
                cout << numberAInt << "%" << numberBInt << " = " <<
                calculadora.calc(numberAInt, '%', numberBInt) << endl;
                break;
            case 6:
                cout << "Entre com o primeiro numero da operacao: " << endl;
                numberA = evaluateNumber(numberA);
                cout << "Entre com o segundo numero da operacao: " << endl;
                numberB = evaluateNumber(numberB);            
                cout << numberA << "^(" << numberB << ") = " <<
                calculadora.calc(numberA, '^', numberB) << endl;
                break;
            case 7:
                cout << "Entre com o numero da operacao: " << endl;
                numberA = evaluateNumber(numberA);            
                cout << numberA << "^(1/2)" << " = " <<
                calculadora.calc(numberA, 'r') << endl;
                break;
            case 8:
                cout << "Entre com o numero da operacao: " << endl;
                numberAUnsigned = evaluateNumber(numberAUnsigned);            
                cout << numberAUnsigned << "!" << " = " <<
                calculadora.calc(numberAUnsigned, '!') << endl;
                break;
            case 9:
                cout << "Entre com o numero da operacao: " << endl;
                numberAUnsigned = evaluateNumber(numberAUnsigned);            
                cout << "Fibonacci(" << numberAUnsigned  << ") = " <<
                calculadora.calc(numberAUnsigned, 'f') << endl;
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