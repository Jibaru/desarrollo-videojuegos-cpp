#include "Square.h"

Square::Square(float side_length) : side_(side_length) {};
float Square::getArea() const {return side_ * side_; };