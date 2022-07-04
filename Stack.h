//
// Created by JUAN PABLO on 3/07/2022.
//

#ifndef PROYECTOEXPRESIONESMATEMATICAS_STACK_H
#define PROYECTOEXPRESIONESMATEMATICAS_STACK_H


class Stack {
public:
    int sizeOfStack;
    char pila[1000];
    int topOfStack;

    //contructor
    Stack(int tam){
        sizeOfStack = tam;
        topOfStack = 0;
    }
//agregar a la pila
    void push(char dato);

//funcion para saber que elemento esta en el topOfStack
    char top();

//eliminar el topOfStack de la pila
    void pop();

//saber si la pila esta vacia, si lo esta = true, sino = false
    bool empty();
};


#endif //PROYECTOEXPRESIONESMATEMATICAS_STACK_H
