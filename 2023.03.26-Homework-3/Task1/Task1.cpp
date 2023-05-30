#include<cmath>
#include <iostream>

struct Point
{
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {};
	Point(const Point& pt) : x(pt.x), y(pt.y) {};
	~Point() {};
	float dist()
	{
		return sqrt((x * x + y * y));
	}
	void PrintInfo()
	{
		std::cout << x << " " << y << std::endl;
	}
};
void bubbleSort(int n, Point*& point)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++i)
		{
			if (point[i].dist() < point[i - 1].dist())
			{
				Point pt = point[i];
				point[i] = point[i - 1];
				point[i - 1] = pt;
			}
		}
	}
}

int main(int argc, char* argv[])
{

	int n;
	std::cin >> n;
	Point* point = new Point[n];
	for (int i = 0; i < n; ++i)
	{
		int x;
		int y;
		std::cin >> x >> y;
		point[i] = Point(x, y);
	}
	bubbleSort(n, point);

	for (int i = 0; i < n; ++i)
	{
		point[i].PrintInfo();
	}
	return EXIT_SUCCESS;
}

