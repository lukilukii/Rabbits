#include <iostream>
#include "Field.h"
class Map{
    public: 
    int width;
    int height;
    Field board[32][32];
    Map(int width, int height);
    void debug_display() const;
    void collision();
    void growcarrot();
};

