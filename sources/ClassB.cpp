#include "ClassB.h"
#include <iostream>

ClassB::ClassB() : _x(0), _y(0) {}
ClassB::ClassB(int a, int b) : 
    _x(a), 
    _y(b) 
    {}
ClassB::ClassB(ClassB& other) : 
    _x(other.getX()), 
    _y(other.getY()) 
    {}
ClassB::~ClassB() {}

ClassB& ClassB::operator=(const ClassB& other)
{
    if (this != &other)
    {
        this->_x = getX();
        this->_y = getY();
    }
    return (*this);
}


int ClassB::getX() const { return _x; }
int ClassB::getY() const { return _y; }

std::ostream    &operator<<(std::ostream &out, ClassB const &fixed)
{
    out << "X is " << fixed.getX() << " Y is " << fixed.getY();
    return (out);
}