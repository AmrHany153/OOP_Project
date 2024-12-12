#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::string;
using std::endl;

// The Base
class Shape
{
protected :
        string color;
public:
    Shape(string c): color(c) {}
    virtual void draw() {
    }

    virtual double area()
    {
        return 0;
    }

    virtual double perimeter()
    {
        return 0;
    }
};


class Circle : public Shape
{
    private :
        double radius;
    const double pi = 3.14;
public:
    void draw() {
        cout << "The Circle color is " << color << ", and the radius is " << radius << endl;
        cout << "The area is " << area() << ", and the perimeter is " << perimeter() << endl << endl;
    }
    double area()
    {
        return pi * radius * radius;
    }
    double perimeter()
    {
        return 2 * pi * radius;
    }

    Circle(string c, double r) : Shape(c), radius(r){}
};

class Rectangle : public Shape
{
private:
    double width;
    double height;
public:
    void draw() {
        cout << "The Rectangle color is " << color << ", and the width and height are " << width << " , " << height << endl;
        cout << "The area is " << area() << ", and the perimeter is " << perimeter() << endl << endl;
    }
    double area()
    {
        return width * height;
    }
    double perimeter()
    {
        return (height + width) * 2;
    }
    Rectangle(string c , double w , double h) : Shape(c) , width(w) , height(h){}
};

class Square : public Shape {
private:
    double side;
public:
    Square(string c, double s) : Shape(c), side(s) {}

    void draw() {
        cout << "The Square color is " << color << ", and the side length is " << side << endl;
        cout << "The area is " << area() << ", and the perimeter is " << perimeter() << endl << endl;
    }

    double area() {
        return side * side;
    }

    double perimeter() {
        return 4 * side;
    }
};

class Triangle : public Shape {
private:
    double side;
public:
    Triangle(string c, double s) : Shape(c), side(s) {}

    void draw() {
        cout << "The Triangle color is " << color << ", and the side length is " << side << endl;
        cout << "The area is " << area() << ", and the perimeter is " << perimeter() << endl << endl;
    }

    double area() {
        return (sqrt(3) / 4) * side * side;
    }

    double perimeter() {
        return 3 * side;
    }
};

class Rhombus : public Shape {
private:
    double side;
    double height;
public:
    Rhombus(string c, double s, double h) : Shape(c), side(s), height(h) {}

    void draw() {
        cout << "The Rhombus color is " << color << ", and the side length is " << side << endl;
        cout << "The area is " << area() << ", and the perimeter is " << perimeter() << endl << endl;
    }

    double area() {
        return side * height;
    }

    double perimeter() {
        return side * 4;
    }
};

class Ellipse : public Shape {
private:
    double Qatar1;
    double Qatar2;
    double Pi;
public:
    Ellipse(string c, double q1, double q2) : Shape(c), Qatar1(q1), Qatar2(q2), Pi(3.14) {}

    void draw() {
        cout << "The Ellipse color is " << color << ", and the first qatar length is " << Qatar1 << ", and the second qatar length is " << Qatar2 << endl;
        cout << "The area is " << area() << ", and the perimeter is " << perimeter() << endl << endl;
    }

    double area() {
        return Pi * (Qatar1/2) * (Qatar2/2);
    }

    double perimeter() {

        return 2*Pi * sqrt(((Qatar1 * Qatar1) + (Qatar2 * Qatar2)) / 2);
    }
};

int main() {

    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4, 6);
    Shape* ptr1;
    ptr1 = &circle;
    ptr1->draw();
    ptr1 = &rectangle;
    ptr1->draw();

    // ---------------------------
    Square square("Orange", 4.0);
    Triangle triangle("Yellow", 5.0);
    Shape* ptr2;

    ptr2 = &square;
    ptr2->draw();

    ptr2 = &triangle;
    ptr2->draw();

    // ---------------------------
    Rhombus rhombus("black", 5.0, 5.0);
    Ellipse ellipse("Yellow", 10, 8);
    Shape* ptr3;

    ptr3 = &rhombus;
    ptr3->draw();

    ptr3 = &ellipse;
    ptr3->draw();

    return 0;
}