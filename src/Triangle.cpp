#include "Triangle.h"

// default constructor implementation
Triangle::Triangle():Shape() {
  y = 0.0;
  z = 0.0;
}

// 2nd constructor implementation
Triangle::Triangle(double i, double j, double k):Shape(i) {
  y = j;
  z = k;
}

// setters implementation
void Triangle::setX(double variableX) {
  Shape::setX(variableX);
}

void Triangle::setY(double variableY) {
  y = variableY;
}

void Triangle::setZ(double variableZ) {
  z = variableZ;
}

// getters implementation
double Triangle::getX() const {
  double temp = Shape::getX();
  return temp;
}

double Triangle::getY() const {
  return y;
}

double Triangle::getZ() const {
  return z;
}

// area calculations
double Triangle::getArea() {
  double x = getX();
  double s = (getPerimeter() / 2);
  double a = sqrt(s * (s - x) * (s - y) * (s - z));
  return a;
}

// perimeter calculations
double Triangle::getPerimeter() {
  double x = getX();
  double p = x + y + z;
  return p;
}