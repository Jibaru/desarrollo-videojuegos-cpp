#include <iostream>
#include <list>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Clase{
public:
	Clase(int id, int num_alumnos) : _id(id), _num_alumnos(num_alumnos) {};
	int getId() const { return _id; };
	int getAlumnos() const { return _num_alumnos; };
	// Sobrecarga del operador para poder comparar clases
	bool operator< (const Clase & c) const {
		return (_num_alumnos < c.getAlumnos());
	};

private:
	int _id;
	int _num_alumnos;
};

void muestra_clases(list<Clase> lista);

int main(){

	// Lista de clases
	list<Clase> clases;
	srand(time(NULL));

	for(int i = 0; i < 7; ++i){
		// Inserción de clases
		clases.push_back(Clase(i, int(rand() % 30 + 10)));
	}

	// Se ordena la lista de clases (usa la implementación del operator de sobrecarga)
	clases.sort();
	muestra_clases(clases);

	return 0;
}

void muestra_clases(list<Clase> lista)
{
	list<Clase>::iterator it;

	for( it = lista.begin(); it != lista.end(); ++it){
		cout << it->getId() << endl; 
	}
}