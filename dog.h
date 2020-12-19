#include <iostream>
#ifndef movingObject_h
#define movingObject_h
#include "movingObject.h"
class Dog  :public MovingObject{
    public:
    void move();
    void spotRabbit();
    void bark();
    void chaseRabbit();
    void getOwner();

};

#endif