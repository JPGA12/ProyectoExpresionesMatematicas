//
// Created by JUAN PABLO on 3/07/2022.
//

#include "Utilities.h"
int sizes = 0;

int Utilities::calculateSize(string expression) {
    sizes = expression.length();
    return sizes;

}

int Utilities::getStringSize() {
    return sizes;
}

bool Utilities::validateLetters(string expression) {
    char letter;
    for (int i = 0; i < expression.length(); ++i) {
        letter = expression[i];
        if (isalpha(letter)){
            return true;
        }
    }
    return false;
}