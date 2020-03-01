#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

// Función de retrollamada.
void print (const boost::system::error_code& e) {
	std::cout << "Hola Mundo!" << std::endl;
}

int main () {
	boost::asio::io_service io;

	boost::asio::deadline_timer t(io, boost::posix_time::seconds(3));
	// Espera asíncrona.
	t.async_wait(&print);

	std::cout << "Esperando a print()..." << std::endl;
	// Pasarán casi 3 seg. hasta que print se ejecute...

	// io.run() para garantizar que los manejadores se llamen desde
	// hilos que llamen a run().
	// run() se ejecutará mientras haya cosas por hacer,
	// en este caso la espera asíncrona a print.
	io.run();

	return 0;
}
