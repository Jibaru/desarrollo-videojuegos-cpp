#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v; // Instanciar el vector de int

	v.push_back(7); // Añadir información
	v.push_back(4);
	v.push_back(6);

	vector<int>::iterator it; // Declarar el iterador

	for(it = v.begin(); // it apunta al principio del vector
		it != v.end();  // mientras it no llegue a end()
		++it){          // incrementar el iterador
		cout << *it << endl; // Acceso al contenido de it
	}

	return 0;
}