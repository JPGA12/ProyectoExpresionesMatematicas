//
// Created by JUAN PABLO on 3/07/2022.
//

#ifndef PROYECTOEXPRESIONESMATEMATICAS_TAIL_H
#define PROYECTOEXPRESIONESMATEMATICAS_TAIL_H


class Tail {
public:
    int sizeOfTail;
    //inFront = front
    int inFront;
    //lastest = ultimo
    int lastest;
    char cola[1000];

    //contructor
    Tail(int tam){
        sizeOfTail = tam;
        inFront = 0;
        lastest = 0;
    }
    //agregar a la cola
    void push(char dato);
    //frente de nuestra cola
    char front();
    //eliminar un elemento de la cola
    void pop();
    //si la cola esta vacia o no
    bool empty();
};


#endif //PROYECTOEXPRESIONESMATEMATICAS_TAIL_H
