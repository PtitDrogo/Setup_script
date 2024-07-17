#pragma once
#include <iostream>
class ClassA
{
private:
    int _x;
    int _y;
public:
    //Constructors
    ClassA();
    ClassA(ClassA& other);
    ClassA(int a, int b);
    
    //Destructors
    ~ClassA();

    //Overloads
    ClassA& operator=(const ClassA& other);

    //Getters
    int getX() const;
    int getY() const;
};

std::ostream    &operator<<(std::ostream &o, ClassA const &fixed);