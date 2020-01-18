#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"

Circle::Circle(float radius) : radious_(radius){};
float Circle::getArea() const { return radious_ * (M_PI * M_PI); };
