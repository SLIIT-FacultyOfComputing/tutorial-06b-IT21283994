#include "Box.h"
#include <iostream.h>
using namespace std;

void Box::setWidth(int w)
{
  width = w ;
  
}
void Box::setLength(int l)
{
  length = l;
  
}
void Box::setHeight(int h)
{
  height = h;
}

int Box::getWidth()
{
  return  w ;
  
}
int Box::getLength()
{
  return l;
  
}
int Box::getHeight()
{
  return h;
}


// Implemenet the calcVolume() unction
int Box::calcVolume() {
volume = w * l * h;
  
  
}
