#define THRESHOLD 5

// Función de retrollamada con paso de parámetros.
void count (const boost::system::error_code& e,
		boost::asio::deadline_timer* t, int* counter) {
	if (*counter < THRESHOLD) {
		std::cout << "Contador... " << *counter << std::endl;
		++(*counter);

		// El timer se prolonga un segundo...
		t->expires_at(t->expires_at()	+ boost::posix_time::seconds(1));
		
		// Llamada asíncrona con paso	de argumentos.
		t->async_wait(boost::bind
		(count, boost::asio::placeholders::error, t, counter));
	}
}


int main () {
	int counter = 0;
	
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(1));
	
	// Llamada inicial.
	t.async_wait(boost::bind
			(count, boost::asio::placeholders::error,
		&t, &counter));
	// ...
}
