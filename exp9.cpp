#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

// Base class
class Shape
{
public:
    // Pure virtual functions
    virtual double calculateArea() const = 0
    {
        return 0;
    }
    virtual double calculatePerimeter() const = 0{
        return 0;              
    }
};

// Derived class: Circle
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    Circle(double rad) : radius(rad) {}

    // Calculate area
    double calculateArea() const override
    {
        return PI * pow(radius, 2);
    }

    // Calculate perimeter
    double calculatePerimeter() const override
    {
        return 2 * PI * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Calculate area
    double calculateArea() const override
    {
        return length * width;
    }

    // Calculate perimeter
    double calculatePerimeter() const override
    {
        return 2 * (length + width);
    }
};

// Derived class: Triangle
class Triangle : public Shape
{
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3)
        : side1(s1), side2(s2), side3(s3) {}

    // Calculate area using Heron's formula
    double calculateArea() const override
    {
        double s = (side1 + side2 + side3) / 2;

        return sqrt(s * (s - side1) *
                    (s - side2) * (s - side3));
    }

    // Calculate perimeter
    double calculatePerimeter() const override
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    // Create objects
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
    Triangle triangle(4.0, 4.0, 3.2);

    // Circle
    cout << "Circle:" << endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Perimeter: " << circle.calculatePerimeter() << endl;

    // Rectangle
    cout << "\nRectangle:" << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    // Triangle
    cout << "\nTriangle:" << endl;
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;
    

    return 0;
}
