class Vehiculo
{ 
protected:
	int _ruedas;
	int _pasajeros;

public:
	void setRuedas(int ruedas) { _ruedas = ruedas; }
	int getRuedas() const {return _ruedas;}
	void setPasajeros(int pasajeros){_pasajeros = pasajeros;}
	int getPasajeros() const {return _pasajeros;}
};