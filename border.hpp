#ifndef SHAPE_BORDER_HPP
#define SHAPE_BORDER_HPP
using namespace std;

#include "rectangle.hpp"

class Border : public Rectangle
{
public:
    int marg;
    Border(int h, int w, char s, string c, int m);
    Border(Rectangle p, int m);
    void Cut();
};


#endif //SHAPE_BORDER_HPP
