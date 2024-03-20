#include "Circle.h"

Circle::Circle()
{
	radius = 0.0;
}
Circle::Circle(double rad)
{
	radius = rad;
}

void Circle::setRadius(double rad)
{
	radius = rad;
}

double Circle::getRadius() const
{
	return radius;
}
double Circle::getArea() const
{
	double area;

	return area = pi * radius * radius;
}
double Circle::getDiameter() const
{
	double diameter;

	return diameter = radius * 2;
}
double Circle::getCircumference() const
{
	double circumference; 

	return circumference = 2 * pi * radius;
}