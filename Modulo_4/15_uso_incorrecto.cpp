#include <vector>

struct A{
	A() : a(new char[3000]){}
	~A() { delete [] a; }
	char *a;
};

int main(){
	A var;
	std::vector<A> v;
	v.push_back(var);
	return 0;
}