#include "Square.h"

Square::Square(int side_length) : side_(side_length){}; 
int Square::getArea() const { return side_ * side_; };