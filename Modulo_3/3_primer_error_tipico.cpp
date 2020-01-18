// Primer error típico: No inicializar punteros
#include <iostream>

using namespace std;

int main(){

	int edad, *p;

	p = NULL;

	edad = 23;

	*p = edad; // p?
	
	//p = &edad; // corecto?
	
	return 0;
}