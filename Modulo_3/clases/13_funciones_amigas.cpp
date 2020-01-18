const int USADO = 1;
const int NO_USADO = 0;

class B;

class A
{
	int _estado;

public:
	A(){ _estado = NO_USADO; }
	void setEstado(int estado){ _estado = estado; }
	friend int usado(A a, B b);
};

class B
{
	int _estado;

public:
	B(){ _estado = NO_USADO; }
	void setEstado(int estado){ _estado = estado; }
	friend int usado(A a, B b);

};

int usado(A a, B b){
	return (a._estado || b._estado);
}