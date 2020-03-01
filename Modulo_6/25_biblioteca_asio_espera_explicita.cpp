// Compilar con: 
// g++ 25_biblioteca_asio_espera_explicita.cpp -o Simple -lboost_system -lboost_date_time
// ./Simple
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

int main () {
	//	Todo programa que haga uso de asio	ha de instanciar
	//	un objeto	del tipo io service para	manejar la	E/S.
	boost::asio::io_service io;

	//	Instancia	de un timer (3 seg.)
	//	El primer	argumento siempre es un io service.
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(3));

	// Espera explícita.
	t.wait();

	std::cout << "Hola Mundo!" << std::endl;

	return 0;
}
