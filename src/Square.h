#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square:public Shape {
  public:
  // constructors
    Square();
    Square(double i);
  // setter
    void setL(double variableL);
  // getter
    double getL() const;
  // area and perimeter functions
    double getArea();
    double getPerimeter();
};// end of Square

#endif