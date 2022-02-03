#include <iostream>
#include <cmath>

class myExample
{
private:
	int a;
public:
	int GetA()
	{
		return a;
	}

	void SetA(int newA)
	{
		a = newA;
	}
};

class Vector
{
public:
	Vector() : x1(), y1(), z1()
	{}
	Vector(double _x1, double _y1, double _z1) : x1(_x1), y1(_y1), z1(_z1)
	{}
	
	double lengthVectorAB();

	double SummAB()
	{
		SummAB = (pow(x2 - x1, 2) + (pow(y2 - y1, 2) + (pow(z2 - z1, 2));
		return SummAB.sqrt();
	};

	void ShowvA()
	{
		std::cout << x1 << ", " << y1 << ", " << z1 << ", " << "\n";
	}

private:
	double x1 = 120;
	double y1 = 96;
	double z1 = 1024;
	double x2 = 730;
	double y2 = 236;
	double z2 = 2210;
};


int main()
{
	myExample temp;
	temp.SetA(188);
	float lengthAB = 144;
	std::cout << "Task 1 My New Class and integer value = 188: " << "\n";
	std::cout << temp.GetA() << "\n";
	std::cout <<  "\n";

	Vector vA(120, 96, 1024);
	Vector vB(730, 236, 2210);
	
	std::cout << "Task 2 Vector 3 values Point A = 120, 96, 1024, Point B = 730, 236, 2210: " << "\n";
	
	std::cout << vA.lengthVectorAB() << "\n";
	std::cout << "\n";

}
