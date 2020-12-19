#include <iostream>
#ifndef mapObject_h
#define mapObject_h
#include "mapObject.h"


class Branch :public MapObject{
    public:
    void flush_rabbits();
    void getlocation();
};

#endif
