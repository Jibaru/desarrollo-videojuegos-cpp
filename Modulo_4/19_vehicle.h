class Vechicle
{
public:
	void run(int distance);

private:
	class VehicleImpl;
	VehicleImpl* _pimpl;
};