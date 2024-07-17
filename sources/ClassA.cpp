#include "ClassA.h"
#include <iostream>

ClassA::ClassA() : _x(0), _y(0) {}
ClassA::ClassA(int a, int b) : _x(a), _y(b) {}
ClassA::ClassA(ClassA& other) : _x(other.getX()), _y(other.getY()) {}
ClassA::~ClassA() {}

ClassA& ClassA::operator=(const ClassA& other)
{
    if (this != &other)
    {
        this->_x = getX();
        this->_y = getY();
    }
    return (*this);
}


int ClassA::getX() const { return _x; }
int ClassA::getY() const { return _y; }

std::ostream    &operator<<(std::ostream &out, ClassA const &fixed)
{
    std::cout << "X is " << fixed.getX() << " Y is " << fixed.getY();
    return (out);
}