class Shape{
public :
    int height;
    int width;
    char symbol;
    string color;
    int **tab; // matryca
    int x, y; //pozycja drzewa w lesie

  
    Shape(int h, char s, string c);
    ~Shape();
    void Print();
    void Fill();

    friend class Forest;
};
