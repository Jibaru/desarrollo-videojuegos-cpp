/*Header*/
class Ball{
protected:
	float _x, _y;
	static Ball* theBall_;

	Ball(float x, float y) : _x(x), _y(y) {};
	Ball(const Ball& ball);
	void operator=(const Ball &ball);

public:
	static Ball& getTheBall();
	void move(float _x, float _y){ /***/ };
};

Ball&::getTheBall()
{
	static Ball theBall_;
	return theBall_;
}