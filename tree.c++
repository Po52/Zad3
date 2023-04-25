#include <iostream>
using namespace std;

#include "Tree.hpp" 

void Tree::printTree(){
int i,j;
  cout << color;
  
  for(j=0; j<height; j++)
  {
    for(i=height-j; i>0; i--)
       cout << ' '; 
    
    for(i=0; i<=2*j; i++)
       cout << "*";
    
     cout << endl;
   
  }
    cout << "\033[0m";
  
}

Tree::Tree(int h, char s, string c)
{
  height = h;
  symbol = s;
 
  if(c == "green")
    { color = "\033[1;32m"; }
  if(c == "red")
    { color = "\033[1;31m"; }
  if(c == "yellow")
    { color = "\033[1;33m"; }

  int i,j;

  tab = new int*[height];
  for(j=0; j<height; j++){
    tab[j] = new int[2*height-1];
  
    for(i=0; i<2*height-1; i++)
      tab[j][i] = 0;
  }

  for(j=0; j<height; j++)
  {   
    for(i=height-j-1; i<height-j+2*j; i++)
       tab[j][i] = 1;
   }
}

Tree::~Tree(){
   int j;
   cout << "Kasuje drzewo\n" << endl;

   for(j=0; j<height; j++)
     delete tab[j];
   delete tab;
}
