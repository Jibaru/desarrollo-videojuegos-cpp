#include "Figure.h"

class Circle : public Figure {

private:
    float radious_;

public:
    Circle(float radious);
    float getArea() const;

};