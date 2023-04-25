class Tree{
private :
    int height;
    char symbol;
    string color;
    int **tab;         // matryca
    int x, y;         //pozycja drzewa w lesie
public :
    Tree(int h, char s, string c);
    ~Tree();
    void printTree();

    friend class Forest;
};

