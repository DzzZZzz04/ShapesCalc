#include "Rectangle.h"

// default constructor implementation
Rectangle::Rectangle():Shape() {
  y = 0.0;
}

// 2nd constructor implementation
Rectangle::Rectangle(double i, double j):Shape(i) {
  y = j;
}

// setters implementation
void Rectangle::setX(double variableX) {
  Shape::setX(variableX);
}

void Rectangle::setY(double variableY) {
  y = variableY;
}

// getters implementation
double Rectangle::getX() const {
  double temp = Shape::getX();
  return temp;
}

double Rectangle::getY() const {
  return y;
}

// area calculation 
double Rectangle::getArea() {
  double x = getX();
  double a = x * y;
  return a;
}

// perimeter calculation
double Rectangle::getPerimeter() {
  double x = getX();
  double p = (2 * x) + (2 * y);
  return p;
}