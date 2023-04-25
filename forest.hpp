#include "Tree.hpp"

class Forest{
  public:
    int H, W;
    vector<Tree *> trees;
    int **tab;

  Forest(int h, int w);
  ~Forest();

  void AddTree(int h, char s, string c, int y, int x);
  void PrintForest();
  
};
