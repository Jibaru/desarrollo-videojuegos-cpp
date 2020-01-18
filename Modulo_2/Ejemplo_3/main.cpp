// Generar primero la biblioteca estática figures (se cargan al compilarse)
// g++ -Iheaders -c Square.cpp
// g++ -Iheaders -c Triangle.cpp
// g++ -Iheaders -c Circle.cpp
// ar rs libfigures.a Square.o Triangle.o Circle.o

// Luego generar el ejecutable :
// g++ main.cpp -L. -lfigures -Iheaders -o main

// Generar ahora la biblioteca dinámica figures (se cargan en plena ejecución)
// g++ -Iheaders -fPIC -c Square.cpp
// g++ -Iheaders -fPIC -c Triangle.cpp
// g++ -Iheaders -fPIC -c Circle.cpp
// g++ -o libfigures.so -shared Square.o Triangle.o Circle.o

#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main(){
    Square square(5); 
    Triangle triangle(5, 10);
    Circle circle(10);

    cout << "Square area: "   << square.getArea()   << endl;
    cout << "Triangle area: " << triangle.getArea() << endl;
    cout << "Circle area: "   << circle.getArea()   << endl;

    return 0;  
}