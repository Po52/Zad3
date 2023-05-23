#include <iostream>
using namespace std;

#include "shape.hpp"

void shape::Print() {
    int i, j;

    cout << color;

    for (j = 0; j < height; j++)
    {
        for (i = 0; i < width; i++)
            if (tab[j][i]) {
                cout << color;
                cout << symbol;
            }
            else
                cout << ' ';

        cout << endl;
    }

    cout << "\033[0m";

}


shape::shape(int h, char s, string c)
{
    int i, j;
    height = h;
    width = 1;
    symbol = s;

    cout << " Konstruktor shape z parametrami\n";

    if (c == "green") color = "\033[1;32m";
    if (c == "red") color = "\033[1;31m";
    if (c == "yellow") color = "\033[1;33m";

    counter++;

}

void shape::Alloc(){
    int i, j;
    tab = new int* [height];
    for (j = 0; j < height; j++) {
        tab[j] = new int[width];
        for (i = 0; i < width; i++)
            tab[j][i] = 0;
    }
}

shape::~shape()
{
    int j;
    counter--;
    cout << "kasuje shape\nzostalo " << counter << "\n";
    for (j = 0; j < height; j++)
        delete tab[j];
    delete tab;

    cout << " destruktor shape\n";

}

shape* shape::setXY(int x, int y)
{
    this->x = x;
    this->y = y;
    return this;
}
