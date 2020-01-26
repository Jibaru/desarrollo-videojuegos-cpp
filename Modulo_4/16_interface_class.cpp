class Vehicle
{
public:
	virtual ~Vehicle();
	virtual std::string name() = 0;
	virtual void run() = 0;
};

class Car : public Vehicle 
{
public:
	virtual ~Car();
	std::string name(){ return "Car"; };
	void run(){ /* ... */ };
};

class Motorbike : public Vehicle
{
public:
	virtual ~Motorbike();
	std::string name(){ return "Motorbike"; };
	void run(){ /* ... */ };	
};