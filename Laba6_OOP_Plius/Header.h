class Shapes 
{
protected:
	double square, perimetr;
	int x1, y1, x2, y2, x3, y3, radius;
public:
	Shapes(int x1, int y1, int x2, int y2, int x3, int y3);
	Shapes(int radius);
	virtual void Square();
	virtual void Perimetr();
};
class Triangles : Shapes
{
private:
	double side1, side2, side3;
public:
	Triangles(int x1, int y1, int x2, int y2, int x3, int y3);
	void Square() override;
	void Perimetr() override;
	double SideEquation(int x1, int y1, int x2, int y2);
};
class Circle : Shapes
{
public:
	Circle(int radius);
	void Perimetr() override;
	void Square() override;
};