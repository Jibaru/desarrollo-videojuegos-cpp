// Segundo error típico: Comparación incorrecta de punteros
#include <iostream>

using namespace std;

int main(){


	int s[10];
	int t[10];
	int *p, *q;

	p = s;
	q = t;

	if(p < q){
		// ...
		cout << "entro" << endl;
	}

	return 0;
}