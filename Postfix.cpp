//
// Created by JUAN PABLO on 3/07/2022.
//

#include "Postfix.h"

#include "Tail.h"
#include "Stack.h"
#include "StackFloat.h"





Tail tail(100);

Postfix::Postfix() {

}


//funcion que devuelve la prioridad de un operador
int Postfix::priority(char cases) {

    switch (cases) {
        case '^':
            return 3;
        case '/':
            return 2;
        case '*':
            return 2;
        case '+':
            return 1;
        case '-':
            return 1;
        default :
            return 0;
    }
}

void Postfix::infixToPostfix(string expression) {
    int i = 0;
    char car;
    Stack pila(100);
    while (i < expression.size()) {
        switch (expression[i]) {
            case '(':
                pila.push(expression[i]);
                break;
            case ')':
                while (pila.top() != '(') {
                    car = pila.top();
                    pila.pop();
                    tail.push(car);
                }
                pila.pop();
                break;


            case '^':
            case '*':
            case '/':
            case '+':
            case '-':
                while (priority(expression[i]) <= priority(pila.top())) {
                    car = pila.top();
                    pila.pop();
                    tail.push(car);
                }
                pila.push(expression[i]);
                break;
            default:
                //si es un numero
                tail.push(expression[i]);
                break;
        }
        i++;
    }
    while (!pila.empty()) {
        car = pila.top();
        pila.pop();
        tail.push(car);
    }
}

float Postfix::evaluate() {
    StackFloat pilaFloat(100);
    float x;
    float y;
    float r;
    char ca;

    while (!tail.empty()) {
        ca = tail.front();
        tail.pop();
        switch (ca) {
            case '^':
            case '*':
            case '/':
            case '+':
            case '-':

                y = pilaFloat.top();
                pilaFloat.pop();
                x = pilaFloat.top();
                pilaFloat.pop();
                switch (ca) {
                    case '*':
                        r = x * y;
                        break;
                    case '/':
                        r = x / y;
                        break;
                    case '+':
                        r = x + y;
                        break;
                    case '-':
                        r = x - y;
                        break;
                    case '^':
                        r = pow(x, y);
                        break;
                }
                pilaFloat.push(r);
                break;

            default:
                //transformar un caracter a numero
                pilaFloat.push(ca - '0');

                break;

        }
    }
    return pilaFloat.top();
}

string Postfix::showExpression() {
    Tail cAux = tail;
    string res = "";
    while (!cAux.empty()) {
        res += cAux.front();
        cAux.pop();
    }
    return res;
}



Postfix::~Postfix() {

}
