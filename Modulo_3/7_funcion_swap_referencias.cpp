#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main(){

	int x = 7, y = 13;

	cout << "[" << x << "," << y << "]" << endl; // [7,13]
	swap(x,y);
	cout << "[" << x << "," << y << "]" << endl; // [13,7]

	return 0;
}

void swap(int &a, int&b){

	int aux;

	aux = a;
	a = b;
	b = aux;

}