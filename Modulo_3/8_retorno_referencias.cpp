#include <iostream>

using namespace std;

double& f();

double valor = 10.0;

int main(){

	double nuevo_valor;

	cout << f() << endl; // 10

	nuevo_valor = f(); // nuevo_valor = 10

	cout << nuevo_valor << endl; // 10

	f() = 7.5;

	cout << f() << endl; // 7.5

	return 0;
}

double &f() { return valor; }