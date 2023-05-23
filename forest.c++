#include <iostream>
#include <vector>

using namespace std;
#include "forest.hpp"

forest::forest()
{
    int i;

    tabY = 25;
    tabX = 100;
    tab = new int*[tabY];
    for(i=0; i<tabY; i++)
        tab[i] = new int[tabX];

}

forest::~forest()
{
    int i;

    for(i=0; i<tabY; i++)
        delete tab[i];
    delete tab;

    for(auto t : trees)
        delete t;
    trees.clear();

}

void forest::printTab()
{
    int i, j, ind;
    for(i=0; i<tabY; i++){
        for(j=0; j<tabX; j++){
            ind = tab[i][j];
            if(ind)
            {

                cout << trees[ind-1]->color;
                cout << trees[ind-1]->symbol;
            }
            else
            {
                cout << ' ';
            }
        }

        cout << endl;
        cout << "\033[0m";
    }
}

void forest::Addtree(int x, int y, int h, char s, string color) {
    int i, j;
    tree *t = new tree(h, s, color);
    trees.push_back(t);

    for (i = 0; i < t->height; i++)
        for (j = 0; j < t->height; j++)
            if (t->tab[i][j])
                tab[i + x][j + y] = trees.size();
}

forest& forest::operator+=(shape* sh) {
    this->AddShape(sh, sh->y, sh->x);
    return *this;
}

void forest::AddShape(shape* sh, int y, int x)
{
    int i, j;
    sh->x = x;
    sh->y = y;

    trees.push_back(sh);

    for (j = 0; j < sh->height; j++)
        for (i = 0; i < sh->height; i++)
            if (sh->tab[j][i])
                tab[j + y][i + x] = sh->tab[j][i] * trees.size();
}
