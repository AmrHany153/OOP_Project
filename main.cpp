#include <iostream>
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
int main()
{
    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4, 6);
    Shape* ptr;
    ptr = &circle;
    ptr->draw();
    ptr = &rectangle;
    ptr->draw();
    return 0;
}