//
// Created by JUAN PABLO on 3/07/2022.
//

#ifndef PROYECTOEXPRESIONESMATEMATICAS_POSTFIX_H
#define PROYECTOEXPRESIONESMATEMATICAS_POSTFIX_H


#include <bits/stdc++.h>
#include <ostream>

using namespace std;

class Postfix {
public:


    Postfix();

    Postfix(int size);

    int priority(char cases);

    void infixToPostfix(string expression);

    float evaluate();

    string showExpression();

    virtual ~Postfix();




};

#endif //PROYECTOEXPRESIONESMATEMATICAS_POSTFIX_H
