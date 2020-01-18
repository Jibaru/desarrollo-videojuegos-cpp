class Point3D
{
public:
	Point3D():
		_x(0), _y(0), _z(0){}
	Point3D(int x, int y, int z) :
		_x(x), _y(y), _z(z){}
	Point3D operator+(const Point3D &op2);

private:
	int _x, _y, _z;

};

Point3D Point3D::operator+(const Point3D &op2)
{
	Point3D resultado;

	resultado._x = this->_x + op2._x;
	resultado._y = this->_y + op2._y;
	resultado._z = this->_z + op2._z;

	return resultado;
}