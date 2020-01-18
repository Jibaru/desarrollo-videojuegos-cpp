class Printer{
	void print(Document d){
		//...
	}
};

class PrinterManager{
	Printer p;
	void print(Document d){
		p.print(d);
		// ...
	}
};

int main(){
	Document d;
	PrinterManager m;
	m.print();
	return 0;
}