#include "Square.h"

// default constructor implementation
Square::Square():Shape() {}

// 2nd constructor implementation
Square::Square(double i):Shape(i) {}

// setter implementation
void Square::setL(double variableL) {
  Shape::setX(variableL);
}

// getter implementation
double Square::getL() const {
  double temp = Shape::getX();
  return temp;
}

// area calculation
double Square::getArea() {
  double l = Shape::getX();
  double a = l * l;
  return a;
}

// perimeter calculation
double Square::getPerimeter() {
  double l = Shape::getX();
  double p = 4.0 * l;
  return p;
}