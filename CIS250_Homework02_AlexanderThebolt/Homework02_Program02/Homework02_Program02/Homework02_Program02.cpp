//=======================================================================
//Name: Alexander Thebolt
//Date: 03-01-2023
//Desc: Program 2: Circle Class - Program asks for the radius of a circle
//Program responds with radius entered, along with the the area, diameter
//and circumference of the circle.
//=======================================================================

#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    double radius;

    cout << "Enter the circle radius: ";
    cin >> radius;

    //cleared screen to tidy output
    system("cls");

    //creating object with radius: radius
    Circle circle(radius);

    //display
    cout << "Entered radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Diameter: " << circle.getDiameter() << endl;
    cout << "Circumference: " << circle.getCircumference() << endl;
}
