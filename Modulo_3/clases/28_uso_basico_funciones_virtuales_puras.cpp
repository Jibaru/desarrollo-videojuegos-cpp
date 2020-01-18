#include <iostream>
using namespace std;

class Figura { // Clase abstracta Figura
public:
	virtual float area() const = 0; // Función virtual pura
};

class Circulo : public Figura {
public:
	Circulo (float r) : _radio(r) {}
	void setRadio (float r) { _radio = r; }
	float getRadio () const { return _radio; }
	// Redefinición de área en círculo
	float area () const { return _radio * _radio * 3.14; }

private:
	float _radio;
};

int main(){

	Figura *f;
	Circulo c(1.0);

	f = &c;
	cout << "AREA: " << f->area() << endl;

	// Recuerde realizar un casting al acceder a func. específica
	cout << "Radio:" << static_cast<Circulo*>(f)->getRadio() << endl;
 
	return 0;
}