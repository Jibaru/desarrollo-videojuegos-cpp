// 2_dependencia_indirecta_metodos.cpp
class B{
	void y(){
		//...
	}
};

class C{
	B b;
	void z(){
		b.y();
	}
};

class A{
	C c;
	void x(){
		c.z();
	}
};

int main(){
	A a;
	a.x();
	return 0;
}