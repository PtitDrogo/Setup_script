#pragma once
#include <iostream>
class ClassB
{
private:
    int _x;
    int _y;
public:
    //Constructors
    ClassB();
    ClassB(ClassB& other);
    ClassB(int a, int b);
    
    //Destructors
    ~ClassB();

    //Overloads
    ClassB& operator=(const ClassB& other);

    //Getters
    int getX() const;
    int getY() const;
};

std::ostream    &operator<<(std::ostream &o, ClassB const &fixed);