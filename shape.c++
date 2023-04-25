#include <iostream>
using namespace std;

#include "Shape.hpp" 

void Shape::Print()
{
int i,j;
}

Shape::Shape(int h, char s, string c)
{
  cout << "konstruktor shape z parametrami\n";
  
  height = h;
  symbol = s;

  if(c == "green")
    color = "\033[1;32m";
  if(c == "red")
    color = "\033[1;31m";
  if(c == "yellow")
    color = "\033[1;33m";


  int i,j;

  cout << "allocation";
  tab = new int*[height];
  for(j=0; j<height; j++){
    tab[j] = new int[width];
  
    for(i=0; i<width; i++)
      tab[j][i] = 0;
  }

  Fill();
}

void Shape::Fill()
{
  int j,i;
  
  for(j=0; j<height; j++)
  {   
    for(i=height-j-1; i<height-j+2*j; i++)
       tab[j][i] = 1;
  }
}

Shape::~Shape(){
   int j;
   cout << "Kasuje drzewo\n" << endl;

   for(j=0; j<height; j++)
     delete tab[j];
   delete tab;
  
}
