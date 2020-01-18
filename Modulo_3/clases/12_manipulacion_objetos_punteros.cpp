// Compilar con: g++ -Iheaders Figura.cpp 12_manipulacion_objetos_punteros.cpp -o main 
#include <iostream>
#include "Figura.h"

using namespace std;

int main(){


	Figura *f1;
	f1 = new Figura(1.0, 0.5);

	cout << "[" << f1->getX() << "," << f1->getY() << "]" << endl;

	delete f1;

	return 0;
}