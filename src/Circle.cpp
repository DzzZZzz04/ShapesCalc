#include "Circle.h"

// default constructor implementation
Circle::Circle():Shape() {}

// 2nd constructor implementation
Circle::Circle(double i):Shape(i) {}

// setter implementation
void Circle::setR(double variableR) {
  Shape::setX(variableR);
}

// getter implementation
double Circle::getR() const {
  double temp = Shape::getX();
  return temp;
}

// area calculation
double Circle::getArea() {
  double r = Shape::getX();
  double a = PI * r * r;
  return a;
}

// perimeter calculation
double Circle::getPerimeter() {
  double r = Shape::getX();
  double p = 2.0 * PI * r;
  return p;
}