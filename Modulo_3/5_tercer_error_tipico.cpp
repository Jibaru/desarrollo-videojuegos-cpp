// Tercer error típico: Olvidar el reseteo del puntero
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

	char s[100];
	char *p;

	p = s;

	do{
		
		cout << "Introduzca una cadena...";
		fgets(p, 100, stdin);

		while(*p){
			cout << *p++ << " ";
		}

		cout << endl;


	}while(strcmp(s, "fin"));

	return 0;
}