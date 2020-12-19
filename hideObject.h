#include <iostream>
#ifndef mapObject_h
#define mapObject_h
#include "mapObject.h"


class HideObject :public MapObject{
    public:
    virtual void hide() = 0;
};

#endif