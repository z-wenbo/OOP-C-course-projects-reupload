#include <iostream>

class Shape {
public:
	virtual double getArea() = 0;
};

class Rectangle : public Shape {
protected:
	double width,height;
public:
	Rectangle(double w, double h)
		: width(w) , height(h){}
    double getArea();
};

class Circle : public Shape {
protected:
	double radius;
public:
	Circle(double r): radius(r){}
    double getArea();
};

