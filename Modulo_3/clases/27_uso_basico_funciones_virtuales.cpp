#include <iostream>
using namespace std;

class Base{

public:
	virtual void imprimir() const { cout << "Soy Base! " << endl; }

};

class Derivada1 : public Base {

public:
	void imprimir() const { cout << "Soy Derivada1!" << endl;}

};

class Derivada2 : public Base {

public:
	void imprimir() const { cout << "Soy Derivada2!" << endl;}

};

int main(){

	Base *pb, base_obj;

	Derivada1 d1_obj;
	Derivada2 d2_obj;

	pb = &base_obj;
	pb->imprimir(); // Acceso a imprimir de Base
	pb = &d1_obj;
	pb->imprimir(); // Acceso a imprimir de Derivada1
	pb = &d2_obj;
	pb->imprimir(); // Acceso a imprimir de Derivada2
	
	return 0;
}