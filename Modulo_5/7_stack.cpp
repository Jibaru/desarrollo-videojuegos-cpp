#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){

	vector<int> fichas;
	vector<int>::iterator it;
	stack<int> pila;

	// Rellenar el vector
	for(int i = 0; i < 10; i++){
		fichas.push_back(i);
	}

	for(it = fichas.begin(); it != fichas.end(); it++){
		pila.push(*it); // Apilar elementos para invertir
	}

	fichas.clear(); // Limpiar el vector

	while(!pila.empty()){
		fichas.push_back(pila.top());
		pila.pop();
	}

	return 0;
}