#include <iostream>
using namespace std;

#include "trapez.hpp"


trapez::trapez(int h, char s, string c) : Rectangle(h, 5*h, s, c) {
    cout << "Konstruktor Trapeze\n";
    Cut();
}

void trapez::Cut()
{
    int i, j;
    for (j = 0; j < height; j++) {
        for (i = 0; i < height - j; i++)
            tab[j][i] = 0;
        for (i = width - height + j; i < width; i++)
            tab[j][i] = 0;
    }
}
