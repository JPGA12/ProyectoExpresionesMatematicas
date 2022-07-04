//
// Created by JUAN PABLO on 3/07/2022.
//

#ifndef PROYECTOEXPRESIONESMATEMATICAS_STACKFLOAT_H
#define PROYECTOEXPRESIONESMATEMATICAS_STACKFLOAT_H


class StackFloat {
public:
    int sizeOfStackFloat;
    float pila[1000];
    int topOfStackFloat;

    //contructor
    StackFloat(int tam){
        sizeOfStackFloat = tam;
        topOfStackFloat = 0;
    }
//agregar a la pila
    void push(float dato);

//funcion para saber que elemento esta en el topOfStack
    float top();

//eliminar el topOfStack de la pila
    void pop();

//saber si la pila esta vacia, si lo esta = true, sino = false
    bool empty();

};



#endif //PROYECTOEXPRESIONESMATEMATICAS_STACKFLOAT_H
