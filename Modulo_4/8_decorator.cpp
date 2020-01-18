class Firearm{
public:
	virtual float noise() const = 0;
	virtual float bullets() const = 0;
};

class Rifle : public Firearm{
public:
	float noise() const { return 150.0; }
	int bullets() const { return 5; }
};

/* Decorators */
class FirearmDecorator : public Firearm{
protected:
	Firearm* _gun;
public:
	FirearmDecorator(Firearm* gun) : _gun(gun) {};
	virtual float noise() const { return _gun->noise(); }
	virtual int bullets() const { return _gun->bullets(); }
};

class Silencer : public FirearmDecorator{
public:
	Silencer(Firearm* gun) : FirearmDecorator(gun) {};
	float noise() const { return _gun->noise(); }
	int bullets() const { return _gun->bullets() + 5; }
};

/* Using decorators */
// ...
Firearm* gun = new Rifle();
cout << "Noise: " << gun->noise() << endl;
cout << "Bullets: " << gun->bullets() << endl;
// ...
// char gets a silencer
gun = new Silencer(gun);
cout << "Noise: " << gun->noise() << endl;
cout << "Bullets: " << gun->bullets() << endl;
// ...
// char gets a new magazine
gun = new Magazine(gun);
cout << "Noise: " << gun->noise() << endl;
cout << "Bullets: " << gun->bullets() << endl;