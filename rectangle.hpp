#ifndef SHAPE_RECTANGLE_HPP
#define SHAPE_RECTANGLE_HPP

class Rectangle : public shape {

public:
    using shape::shape;

    virtual void Fill();
    Rectangle(int h, int w, char s, string c);
    Rectangle(int h, char s, string c);
};


#endif //SHAPE_RECTANGLE_HPP
