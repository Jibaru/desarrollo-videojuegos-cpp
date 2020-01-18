class B{
	void y(){
		// ...
	}
};

class A{
	B b;
	void x(){
		b.y();
		// ...
	}
};

main(){
	A a;
	a.x();
}