#include <iostream>
#include "Vehiculo.cpp"

using namespace std;

class Coche : public Vehiculo 
{
	int _PMA;

public:
	void setPMA(int PMA){ _PMA = PMA; }
	int getPMA() const {return _PMA;}
	void mostrar() const {
		cout << "Ruedas: " << _ruedas << endl;
		cout << "Pasajeros:" << _pasajeros << endl;
		cout << "PMA: " << _PMA << endl;
	}
};