#include <iostream>
#include "shape.hpp"
#include "border.hpp"
#include "tree.hpp"
#include "forest.hpp"

using namespace std;

int main()
{
    int i, j;


    Rectangle p(5, 7, '*', "green");
    Rectangle k(5, '*', "green");

    forest las = forest(15, 60);

    Rectangle *p = new Rectangle(5, 7, '*', "green");
    Rectangle *k = new Rectangle(5, '*', "yellow");

    Border* b = new Border(*p, 1);

    tree* c = new tree(5, '*', "red");

    las.AddShape(p, 2, 2);
    las.AddShape(k, 7, 20);
    las.AddShape(b, 3, 40);

    c->setXY(33, 4);
    las += c;


    p.Print();
    cout << endl;
    k.Print();

}
