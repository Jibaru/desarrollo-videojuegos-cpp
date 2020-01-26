/* Vehicle cpp */
#include <19_vehicle.h>

Vehicle::Vehicle()
{
	_pimpl = new VehicleImpl();
}

void Vehicle::run()
{
	_pimpl->run();
}