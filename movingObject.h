#include <iostream>
#ifndef mapObject_h
#define mapObject_h
#include "mapObject.h"
#include "map.h"


class MovingObject :public MapObject{
    public:
    virtual void move() = 0;
};

#endif