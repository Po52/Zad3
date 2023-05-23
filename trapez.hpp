#ifndef SHAPE_TRAPEZ_HPP
#define SHAPE_TRAPEZ_HPP
using namespace std;
#include "rectangle.hpp"

class trapez: public Rectangle
{
public:
    int margin;
    trapez(int h, char s, string c);
    void Cut();
};


#endif //SHAPE_TRAPEZ_HPP
