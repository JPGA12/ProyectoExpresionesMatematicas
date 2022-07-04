#include <bits/stdc++.h>
#include "Utilities.h"
#include "Postfix.h"

using namespace std;
string infija;
Postfix postfix;
Utilities utilities1;

int main() {

    int option;


    cout << "Bienvenido\n" << endl;
    while (option != 2) {
        cout << "Digite la opcion que desea:\n1.Operar\n2.Salir" << endl;
        cin >> option;
        switch (option) {
            case 1:

                cout << "Ingrese su expresion" << endl;
                cin >> infija;

                if (utilities1.validateLetters(infija) == true) {
                    cout << "--------------------------------" << endl;
                    cout << "DIGITE UNA EXPRESION SIN LETRAS" << endl;
                    cout << "--------------------------------" << endl;
                } else {
                    postfix.infixToPostfix(infija);
                    cout << postfix.showExpression() << endl;

                    cout << "El resultado es: " << postfix.evaluate() << "\n" << endl;
                }


                break;
            case 2:
                cout << "BYE!" << endl;
                break;
            default:
                //validar para que al ingresar un caracter este vote error
                cout << "La entrada no es valida, intente nuevamente" << endl;
                break;
        }

    }

    return EXIT_SUCCESS;
}




