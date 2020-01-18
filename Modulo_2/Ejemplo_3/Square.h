#include "Figure.h"

class Square : public Figure {

private:
    float side_;

public:
    Square(float side_length);
    float getArea() const;

};