#include <iostream>
using namespace std;

#include "rectangle.hpp"

Rectangle::Rectangle(int h, int w, char s, string c) : Shape(h, s, c) {
    cout << "Konstruktor rectangle z parametrami\n";
    width = w;
    Alloc();  // dopiero teraz bo nie znaliśmy width
    Fill();

}

Rectangle::Rectangle(int h, char s, string c) : Shape(h, s, c) {
    cout << "Konstruktor rectangle z parametrami bez h czyli square\n";
    width = h;
    Alloc();
    Fill();

}


void Rectangle::Fill() {
    int i, j;
    for (j = 0; j < height; j++)
    {
        for (i = 0; i < width; i++)
            tab[j][i] = 1;
    }

}
