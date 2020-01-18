#include "Triangle.h"

Triangle::Triangle(float base, float height) : base_(base), height_(height) {};
float Triangle::getArea() const {return (base_ * height_)/2; };

