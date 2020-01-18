//33_uso_basico_excepciones.cpp
#include <iostream>
using namespace std;

int main(){

	try{
		int *array = new int[10000000];
	}
	catch(bad_alloc &e){
		cerr << "Error al reservar memoria" << endl;
	}

	return 0;
}