#include<iostream>
#include<cmath>
struct Shape
{
public:
	int a;
	int b;
	int c;
	int d;
	Shape(int a = 5, int b = 5, int c = 5, int d = 5)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	Shape(Shape const& mm)
	{
		this->a = mm.a;
		this->b = mm.b;
		this->c = mm.c;
		this->d = mm.d;
	}
	~Shape() {}
};

struct Rectangle : public Shape
{
public:
	Rectangle(int a, int b) :Shape(a, b) {};

	float area()
	{
		return (a * b);
	}
	~Rectangle() {}
};

struct Triangle : public Shape
{
	Triangle(int a, int b, int c) : Shape(a, b, c) {};
	float area() {
		float p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	~Triangle() {}
};

struct Circle : public Shape
{
	Circle(int a) :Shape(a) {};
	float area()
	{
		return (a * a * (3.14));
	}
	~Circle() {}
};

struct Square :public Shape
{
	Square(int a) :Shape(a) {};
	float area() {
		return (a * a);
	}
};

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	Triangle trian = Triangle(a, b, c);
	std::cout << "Triangle area" << trian.area() << std::endl;

	Rectangle r = Rectangle(a, b);
	std::cout << "Rectangle area is " << r.area() << std::endl;

	Square sq = Square(a);
	std::cout << "Square area is " << sq.area() << std::endl;

	Circle circ = Circle(a);
	std::cout << "Circle area is " << circ.area() << std::endl;
	return EXIT_SUCCESS;
}
