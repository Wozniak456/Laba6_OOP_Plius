using namespace std;
#include <iostream>
#include "Header.h"
int main()
{
	cout << "Vozniak Sofiia, is-01" << endl;
	Triangles triangle = Triangles(0, 0, 4, 4, 6, 0);
	triangle.Perimetr();
	triangle.Square();
	Circle circle = Circle(3);
	circle.Perimetr();
	circle.Square();
}
