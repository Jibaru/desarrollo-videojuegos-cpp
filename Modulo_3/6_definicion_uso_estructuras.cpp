#include <iostream>

using namespace std;

struct persona{
	string nombre;
	int edad;
};

void moidificar_nombre(persona *p, const string& nuevo_nombre);

int main(){

	persona p;
	persona *q;

	p.nombre = "Luis";
	p.edad = 23;

	q = &p;

	cout << q->nombre << endl;
	moidificar_nombre(q, "Sergio");
	cout << q->nombre << endl;

	return 0;
}

void moidificar_nombre(persona *p, const string& nuevo_nombre){
	p->nombre = nuevo_nombre;
}