#include "Coche.cpp"

int main(){

	Vehiculo *v;
	Coche c;

	c.setPasajeros(7);
	c.setRuedas(4);
	c.setPMA(1885);

	v = &c;

	//cout << v->getPMA() << endl; // Error en tiempo de compilación

	cout << ((Coche*) v)->getPMA() << endl; // No recomendable

	cout << static_cast<Coche*>(v)->getPMA() << endl; // Estilo c++


	return 0;
}