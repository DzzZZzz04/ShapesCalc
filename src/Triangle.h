#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include <math.h>

class Triangle:public Shape {
  private:
    double y;
    double z;

  public:
  // constructors
    Triangle();
    Triangle(double i, double j, double k);
  // setters
    void setX(double variableX);
    void setY(double variableY);
    void setZ(double variableZ);
  // getter
    double getX() const;
    double getY() const;
    double getZ() const;
  // area and perimeter functions
    double getArea();
    double getPerimeter();
};// end of Triangle 

#endif