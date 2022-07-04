//
// Created by JUAN PABLO on 3/07/2022.
//

#include "StackFloat.h"

void StackFloat::push(float dato) {

    if (sizeOfStackFloat > topOfStackFloat){
        topOfStackFloat++;
        pila[topOfStackFloat] = dato;
    }
}

float StackFloat::top() {
    if (topOfStackFloat != 0) {
        return pila[topOfStackFloat];
    }else{
        return -1;
    }
}

void StackFloat::pop() {
    if (topOfStackFloat != 0){
        topOfStackFloat--;
    }
}

bool StackFloat::empty() {
    return topOfStackFloat == 0;
}