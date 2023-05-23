#ifndef SHAPE_FOREST_HPP
#define SHAPE_FOREST_HPP
#include "shape.hpp"

class forest {
private:
    int **tab;
    //int tabX, tabY;
    //vector<Tree*> trees;
    int H, W;
    vector<shape*> trees;
public:
    forest(int H, int W);
    ~forest();
        void AddShape(shape* sh, int y, int x);
    void PrintForest();

    forest& operator+=(shape* sh);
};


#endif //SHAPE_FOREST_HPP
