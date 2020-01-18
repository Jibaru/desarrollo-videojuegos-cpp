//34_excepcion_definida_por_usuario.cpp
#include <iostream>
using namespace std;

class MiExcepcion{
	const string &_razon;

public:
	MiExcepcion (const string &razon): _razon(razon) {}
	const string &getRazon() const { return _razon; }
};

int main(){

	int valor;
	const string &r = "Valor introducido incorrecto";

	try{
		cout << "Introduzca un valor entre 1 y 10...";
		cin  >> valor;

		if(valor < 1 || valor >10){
			throw MiExcepcion(r);
		}	
	}
	catch(MiExcepcion &e){
		cerr << e.getRazon() << endl;
	}

	return 0;
}