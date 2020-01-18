#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class A{
	char *_valor;

public:
	A(){_valor = 0;}
	A(const A &obj);
	~A(){
		if(_valor) delete [] _valor;
		cout << "Liberando..." << endl;
	}

	void mostrar() const { cout << _valor << endl;}
	void set (char *valor);
	A& operator=(const A &obj);

};

A::A(const A &obj)
{
	_valor = new char[strlen(obj._valor) + 1];
	strcpy(_valor, obj._valor);
}

void A::set(char *valor)
{
	_valor = new char[strlen(valor) + 1];
	strcpy(_valor, valor);
}

A& A::operator=(const A &obj)
{
	if(strlen(obj._valor) > strlen(_valor)){
		delete [] _valor;
		_valor = new char[strlen(obj._valor) + 1];
	}

	strcpy(_valor, obj._valor);

	return *this;
}

A entrada(){
	char entrada[80];

	A a;

	cout << "Introduzca texto: ";
	cin >> entrada;

	a.set(entrada);

	return a;
}

int main(){

	A obj;

	obj = entrada();
	obj.mostrar();

	return 0;
}