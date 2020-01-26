class Final
{
	~Final(){} // Privado
	friend class A;
};

class A : virtual Final
{ };

class B : public B
{ };

int main(void)
{
	B b; // fallo de compilación
}