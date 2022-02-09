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
	Vector()
	{}
	Vector(double _x1, double _y1, double _z1) : x1(_x1), y1(_y1), z1(_z1)
	{}
	
	double VectorLength()
	{
		return sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
	}

private:
	double x1 = 12;
	double y1 = 9;
	double z1 = 10;
};


int main()
{
	myExample temp;
	temp.SetA(188);
	float lengthAB = 144;
	std::cout << "Task 1 My New Class and integer value = 188: " << "\n";
	std::cout << temp.GetA() << "\n";
	std::cout <<  "\n";
	
	std::cout << "Task 2 Vector 3 values Point A = 0, 0, 0, Point B = 12, 9, 10: " << "\n";
	
	Vector Length;
	Length.VectorLength();

	std::cout << "\n";
	std::cout << Length.VectorLength() <<"\n";
	std::cout << "\n";
}
