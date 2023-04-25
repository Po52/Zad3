#include <iostream>
#include <vector>

using namespace std;

#include "Forest.hpp"

Forest::Forest(int h, int w){
  int i,j;
  H = h;
  W = w;

  tab = new int*[H];
  for(j=0; j<H; j++){
    tab[j] = new int[W];
    for(i=0; i<W; i++)
      tab[j][i] = 0;
  }
}

Forest::~Forest(){
   int j;

   for(j=0; j<H; j++)
     delete tab[j];
   delete tab;

  for(auto t : trees)
    delete t;

  trees.clear();

   
}

void Forest::AddTree(int h, char s, string c, int y, int x){
   int i, j; 
   Tree *drzewko = new Tree(h, s, c);
   drzewko->x = x;
   drzewko->y = y;

   trees.push_back(drzewko);

   for(j=0; j<drzewko->height; j++)
     for(i=0; i<2*drzewko->height-1; i++)
       if(drzewko->tab[j][i])
        tab[j+y][i+x] = drzewko->tab[j][i] * trees.size();
  
}

void Forest::PrintForest()
{
  int i, j, k;
  for(j=0; j<H; j++){
    for(i=0; i<W; i++)
      {
        k = tab[j][i];
        if(k){
          cout << trees[k-1]->color;
          cout << trees[k-1]->symbol;
        }
        else
          cout << " ";

      }  // for i
    cout << endl;
  }  // for j
  cout << "\033[0m" << endl << endl;
  
}
