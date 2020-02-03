#include <iostream>
#include <map>
using namespace std;

int main(){

	map<int, string> jugadores;
	pair<map<int, string>>::iterator, bool> ret;

	// Insertar elementos
	jugadores.insert(pair<int, string>(1, "Luis"));
	jugadores.insert(pair<int, string>(2, "Sergio"));

	ret = jugadores.insert(pair<int, string>(2, "David"));

	if(ret.second == false){
		cout << "El elemento 2 ya existe";
		cout << "con un valor de " << ret.first->second << endl;
	}

	jugadores[3] = "Alfredo"; // Inserción con []...

	// Caso excepcional; se añade valor por defecto
	const string& j_aux = jugadores[4]; // jugadores[4] = "

	return 0;
}