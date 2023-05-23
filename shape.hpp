#ifndef SHAPE_TREE_HPP
#define SHAPE_TREE_HPP


class tree {
private:
    int height;
    char symbol;
    string color;
    int **tab;


public:

    void printTree();

    tree(int h, char s, string c);
    ~tree();

    void printTreeFromTab();
    int getHeight();
    int getWidth();

    friend class Forest;

};


#endif //SHAPE_TREE_HPP
