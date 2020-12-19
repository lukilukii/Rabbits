#include <iostream>
#ifndef movingObject_h
#define movingObject_h
#include "movingObject.h"
class Hunter  :public MovingObject{
    public:
    void move();
    void kill();
    void setTrap();
    void takeCarrot();

};

#endif