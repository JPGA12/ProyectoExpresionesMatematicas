//
// Created by JUAN PABLO on 3/07/2022.
//

#include "Tail.h"

void Tail::push(char dato) {
    //inFront = 0 y lastest = 0 la cola esta vacia
    if (inFront == 0 && lastest == 0) {
        inFront = 1;
        lastest = 1;
    } else {
        lastest++;
    }
    cola[lastest] = dato;
}

char Tail::front() {
    if (inFront == 0 && lastest == 0) {
        return -1;
    }
    return cola[inFront];
}

void Tail::pop() {
    inFront++;
    if (inFront > lastest) {
        inFront = 0;
        lastest = 0;
    }
}

bool Tail::empty() {
    return (inFront == 0 && lastest == 0);
}