#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle:public Shape {
  private:
    double y;

  public:
  // constructors
    Rectangle();
    Rectangle(double i, double j);
  // setters
    void setX(double variableX);
    void setY(double variableY);
  // getter
    double getX() const;
    double getY() const;
  // area and perimeter functions
    double getArea();
    double getPerimeter();
};// end of Rectangle 

#endif