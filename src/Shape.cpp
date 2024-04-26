#include "Shape.h"

// default constructor implementation
Shape::Shape() {
  x = 0.0;
}

// 2nd constructor implementation
Shape::Shape(double i) {
  x = i;
}

// setter implementation
void Shape::setX(double variableX) {
  x = variableX;
}

// getter implementaion 
double Shape::getX() const {
  return x;
}

// default area calculation
double Shape::getArea() {
  double a = x * x;
  return a;
}

// default perimeter calculation
double Shape::getPerimeter() {
  double p = 4.0 * x;
  return p;
}