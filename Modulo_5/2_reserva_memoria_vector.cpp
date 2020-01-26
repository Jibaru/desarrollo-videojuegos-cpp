#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v;
	v.reserve(4);
	cout << "Capacidad inicial: " << v.capacity() << endl;

	v.push_back(7);
	v.push_back(4);

	cout << "Capacidad actual: " << v.capacity() << endl;

	v.push_back(4); // Provoca pasar de 4 a 8
	// Se puede evitar con v.reserve(8) al principio

	cout << "Capacidad actual: " << v.capacity() << endl;

	return 0;
}