class Figura
{

public:
	Figura(double i, double j);
	~Figura();

	void setDim(double i, double j);
	double getX() const;
	double getY() const;

protected:
	double _x, _y;

};