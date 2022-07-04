//
// Created by JUAN PABLO on 3/07/2022.
//

#include "Stack.h"

void Stack::push(char dato) {

    if (sizeOfStack > topOfStack){
        topOfStack++;
        pila[topOfStack] = dato;
    }
}

char Stack::top() {
    if (topOfStack != 0) {
        return pila[topOfStack];
    }else{
        return -1;
    }
}

void Stack::pop() {
    if (topOfStack != 0){
        topOfStack--;
    }
}

bool Stack::empty() {
    return topOfStack == 0;
}