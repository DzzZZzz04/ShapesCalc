#include <iostream>
#include <iomanip>
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
// all shape libraries included, no need to include "Shape.h" because 
// it is included in each shape headerfile 
using namespace std;

//  *************************************************************************
//  print function
//  Purpose: To print out the calculated area and perimeter of given shapes
//  Parameters:
//  <1>  s: The name of the shape to be printed 
//  <2>  a: The value of the shape's area
//  <2>  p: The value of the shape's perimeter
//  Returns:  N/A
//  Side Effects:  Area and perimeter of the shape printed in a
//                 response format to the user
//  *************************************************************************
void print(string s, double a, double p);

int main() {
  double length, width;
  double radius;
  double side1, side2, side3;
  double area, perimeter;
  char option = 'Q';
  // initialization of all the possible shape parameters and user option

  cout << "This program calculates the area and perimeter of four simple shapes" << endl;
  cout << "It assumes that all measurements given are in centimeters (cm)" << endl;
  // explanation of what the program does to the user 

  // while loop that is terminated by the user when done with the program 
  while (option != 'q') {
    cout << "\nr: (Rectangle) calculate the perimeter and area of a rectangle\n";
    cout << "c: (Circle) calculate the perimeter and area of a circle\n";
    cout << "s: (Square) calculate the perimeter and area of a square\n";
    cout << "t: (Triangle) calculate the perimeter and area of a triangle\n\n";
    cout << "\tPlease enter your option here: ";
    cin >> option;
    // shape prompts

    // switch-case for the user's option of which shape calculations are done for 
    switch(option) {
      case 'r':
      {
        // prompt for the rectangle's parameters
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        // create a new rectangle object using user defined parameters
        Rectangle userRectangle(width, length);
        // calculate the rectangle's area
        area = userRectangle.getArea();
        // calculate the rectangle's perimeter
        perimeter = userRectangle.getPerimeter();
        // print the area and the perimeter of the rectangle 
        print("rectangle", area, perimeter);
        break;
      }// end of 'r' case for rectangle calculations 
        
      case 'c':
      {
        // prompt for the circle's radius
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        // create a new circle object using user defined radius
        Circle userCircle(radius);
        // calculate the circle's area
        area = userCircle.getArea();
        // calculate the circle's perimeter
        perimeter = userCircle.getPerimeter();
        // print the area and the perimeter of the circle 
        print("circle", area, perimeter);
        break;
      }// end of 'c' case for circle calculations

      case 's':
      {
        // prompt for the square's length
        cout << "Enter the length of the square: ";
        cin >> length;
        // create a new square object using user defined length 
        Square userSquare(length);
        // calculate the square's area
        area = userSquare.getArea();
        // calculate the square's perimeter
        perimeter = userSquare.getPerimeter();
        // print the area and the perimeter of the sqaure 
        print("square", area, perimeter);
        break;
      }// end of 's' case for square calculations

      case 't':
      {
        // prompt for the triangle's parameters
        cout << "Enter the length of the first side of the triangle: ";
        cin >> side1;
        cout << "Enter the length of the second side of the trianglle: ";
        cin >> side2;
        cout << "Enter the length of the thrid side of the trianglle: ";
        cin >> side3;
        // create a new triangle object using user defined parameters 
        Triangle userTriangle(side1, side2, side3);
        // calculate the triangle's area
        area = userTriangle.getArea();
        // calculate the triangle's perimeter
        perimeter = userTriangle.getPerimeter();
        // print the area and the perimeter of the triangle 
        print("triangle", area, perimeter);
        break;
      }// end of 't' case for triangle calculations

      default:
        cout << endl << setw(40) << "Invalid option!\n\n";
        break;
    }// end of switch-case(option)

    cout << "\tPress 'q' to quit or any other key to run another calculation: ";
    cin >> option;
  }// end of while

  cout << setw(33) << "Bye!\n";

  return 0;
}// end of main 

//  print function
void print(string s, double a, double p) {
  cout << "The area of the " << s << " is " << a << "cm²." << endl;
  cout << "The perimeter of the " << s << " is " << p << "cm.\n\n";
}// end of print
