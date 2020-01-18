#include <iostream>

using namespace std;

class A{
	int _valor;

public:
	A(int valor): _valor(valor){
		cout << "Construyendo..." << endl;
	}
	~A(){
		cout << "...Destruyendo" << endl;
	}

	int getValor() const {
		return _valor;
	}
};

void mostrar(A a){
	cout << a.getValor() << endl;
}

int main(){
	A a(7); // Construyendo

	mostrar(a); // 7, seguidamente
				// Destruye la copia(parámetro) a, y en esta misma
				// función destruye el argumento a

	return 0;
}