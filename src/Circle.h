#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape {
  public:
  // constructors
    Circle();
    Circle(double i);
  // setter
    void setR(double variableR);
  // getter
    double getR() const;
  // area and perimeter functions
    double getArea();
    double getPerimeter();
};// end of Circle 

#endif