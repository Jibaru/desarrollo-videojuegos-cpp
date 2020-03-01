class Counter {
public:
	Counter (boost::asio::io_service& io)
		: _timer(io, boost::posix_time::seconds(1)), _count(0)	{
		_timer.async_wait(boost::bind(&Counter::count, this));
	}

	~Counter () { cout << "Valor final: " << _count << endl; }

	void count () {
		if (_count < 5) {
			std::cout << _count++ << std: :endl; _timer.expires_at(_timer.expires_at () +
				boost::posix_time::seconds(1));
			
			// Manejo de funciones miembro.
			_timer.async_wait(boost::bind(&Counter::count, this));
		}
	}

private:
	boost::asio::deadline_timer _timer;
	int _count;
};

int main () {
	boost::asio::io_service io;
	
	Counter c(io); // Instancia de la clase Counter.
	
	io.run();
	
	return 0;
}
