// Compilar usando -I para inlcuir el módulo "Square" (Buena práctica)
// g++ -Iheaders -c Square.cpp
// g++ -Iheaders -c main.cpp
// g++ Square.o main.o -o main

// Pruebe realizar todo al mismo tiempo
// g++ -Iheaders Square.cpp main.cpp -o main

#include <iostream>
#include "Square.h"

using namespace std;

int main(){

    Square square(5);
    cout << "Area: " << square.getArea() << endl;

    return 0;
}