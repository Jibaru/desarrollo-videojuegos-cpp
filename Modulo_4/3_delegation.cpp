class WheelMaker{
	Wheel makeWheel(){
		// do the Wheel and return it
	}
};

class CarMaker{
	WheelMaker w;
	Car makeCar(){
		Wheel wheel1 = w.makeWheel();
		// ... do more stuff
	}
};

int main(){

	CarMaker c;
	c.makeCar();

	return 0;
}