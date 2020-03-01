class Counter {
public:
	Counter (boost::asio::io_service& io)
		: _strand(io), // Para garantizar la exclusión mutua.
		  _timer1(io, boost::posix_time::seconds(1)),
          _timer2(io, boost::posix_time::seconds(1)),
	      _count(0) {
	
			//	Los manejadores	se	'envuelven'	por	strand para
			//	que no se ejecuten	de	manera	concurrente.
			_timer1.async_wait(_strand.wrap
				(boost::bind(&Counter::count1, this)));

			_timer2.async_wait(_strand.wrap
				(boost::bind(&Counter::count2, this)));
		}

	// count1 y count2 nunca se ejecutarán en paralelo.
	void count1() {
		if (_count < 10) {
		// IDEM que	en el ejemplo anterior.
		_timer1.async_wait(_strand.wrap
			(boost::bind(&Counter::count1, this)));
		}
	}

	// IDEM que count1 pero sobre timer2 y count2
	void count2() { /* src */ }

private:
	boost::asio::strand _strand;
	boost::asio::deadline_timer _timer1, _timer2;
	int _count;
};

int main() {
	boost::asio::io_service io;
	
	// run() se llamará desde dos threads (principal y boost)
	Counter c(io);
	boost::thread t(boost::bind(&boost::asio::io_service::run, &io));
	io.run();
	t.join();

	return 0;
}
