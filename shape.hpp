#ifndef SHAPE_SHAPE_HPP
#define SHAPE_SHAPE_HPP
using namespace std;

class shape {
protected:
    int height;
    int width;
    string color;
    char symbol;

    int** tab;

public:
    void Print();

    virtual void Fill() = 0;
    void Alloc();

    shape(int h, char s, string c);
    ~shape();

    static int counter;

    friend class forest;
};


#endif //SHAPE_SHAPE_HPP
