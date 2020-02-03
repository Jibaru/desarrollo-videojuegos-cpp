#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

#define DISTANCIA 5

struct ValorAbsMenos
{
	bool operator()(const int& v1, const int& v2) const {
		return (abs(v1 - v2) < DISTANCIA);
	}
};

void recorrer(set<int, ValorAbsMenos> valores);

int main(){

	set<int, ValorAbsMenos> valores;

	valores.insert(5); valores.insert(9);
	valores.insert(3); valores.insert(7);

	recorrer(valores);

	return 0;
}