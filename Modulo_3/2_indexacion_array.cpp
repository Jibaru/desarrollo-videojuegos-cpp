#include <iostream>

using namespace std;

int main(){

	char s[20] = "hola mundo";
	char *p;

	int i;

	for(p = s; i = 0; p[i]++){
		p[i] = toupper(p[i]);
	}

	cout << s << endl;


	return 0;
}