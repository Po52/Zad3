#include <iostream>
using namespace std;
#include "tree.hpp"

void tree::printTree(){
    int i,j;
    cout << color; // color on
    for(i=0; i<height;i++){
        for(j=height-i; j>0; j--)
            cout << " ";

        for(j=0; j<2*i+1; j++){
            cout << symbol;
            //tab[i][j+height-i] = 1;
        }

        cout << endl;
    }
    cout << "\033[0m" << endl;  // color off

    printTreeFromTab();

}

void tree::printTreeFromTab()
{
    int i,j;
    for(i=0; i<height; i++){
        for(j=0; j<2*height+1; j++)
            cout << tab[i][j];
        cout << endl;
    }
}

tree::tree(int h, char s, string c)
{
    int i,j;
    height = h;
    symbol = s;

    if(c == "red") color = "\033[1;31m";
    if(c == "green") color = "\033[0;32m";
    if(c == "bgreen") color = "\033[1;32m";
    if(c == "yellow") color = "\033[1;33m";
    if(c == "blue") color = "\033[1;34m";

    tab = new int*[height];
    for(i=0; i<height; i++){
        tab[i] = new int[2*height+1];
        for(j=0; j<2*height+1; j++)
            tab[i][j] = 0;
    }

    for(i=0; i<height;i++){
        for(j=0; j<2*i+1; j++){
            tab[i][j+height-i] = 1;
        }
    }

}

tree::~tree()
{
    int i;

    for(i=0; i<height; i++)
        delete tab[i];
    delete tab;

    cout << "kas " << symbol << endl;

}

int tree::getHeight(){
    return height;
}

int tree::getWidth(){
    return height*2+1;
}
