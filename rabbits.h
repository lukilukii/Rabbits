#include <iostream>
#ifndef movingObject_h
#define movingObject_h
#include "movingObject.h"
class Rabbit :public MovingObject{
    private:
    int number;
    bool gender;
    int age;

    public:
    void move();
    void procreate();
    void hide();
    void eatCartot();
    void getGender();

};

#endif