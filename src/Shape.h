#ifndef SHAPE_H
#define SHAPE_H

const double PI = 3.14159;

class Shape {
  private:
    double x;

  public:
  // constructors
    Shape();
    Shape(double i);
  // setter
    void setX(double variableX);
  // getter
    double getX() const;
  // area and perimeter functions
    double getArea();
    double getPerimeter();
};// end of Shape

#endif