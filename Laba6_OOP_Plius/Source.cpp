#include "Header.h"
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
Shapes::Shapes(int x1, int y1, int x2, int y2, int x3, int y3)
{
	this->x1 = x1; this->y1 = y1;
	this->x2 = x2; this->y2 = y2;
	this->x3 = x3; this->y3 = y3;
}
Shapes::Shapes(int radius)
{
	this->radius = radius;
}
void Shapes::Square()
{
	cout << "Square is: " << square << endl;
}
void Shapes::Perimetr()
{
	cout << "Perimetr is: " << perimetr << endl;
}
Triangles::Triangles(int x1, int y1, int x2, int y2, int x3, int y3)
	: Shapes (x1, y1, x2, y2, x3, y3)
{
	side1 = SideEquation(x1, y1, x2, y2);
	side2 = SideEquation(x1, y1, x3, y3);
	side3 = SideEquation(x3, y3, x2, y2);
}
void Triangles::Square()
{
	double pivPerym = (side1 + side2 + side3) / 2;
	square = sqrt(pivPerym * (pivPerym - side1) * (pivPerym - side2) * (pivPerym - side3));
	Shapes::Square();
}
void Triangles::Perimetr()
{
	perimetr = side1 + side2 + side3;
	Shapes::Perimetr();
}
double Triangles::SideEquation(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
Circle::Circle(int radius) :Shapes(radius) 
{
}
void Circle::Perimetr() 
{
	perimetr = 2 * 3.1415 * radius;
	Shapes::Perimetr();
}
void Circle::Square()
{
	square = 3.1415 * radius * radius;
	Shapes::Square();
}