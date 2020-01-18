#include "Coche.cpp"

int main(){

	Vehiculo *v;

	Coche c;

	c.setRuedas(4);
	c.setPasajeros(7);
	c.setPMA(1885);

	v = &c;

	cout << "Pasajeros: " << v->getPasajeros() << endl;

	return 0;
}