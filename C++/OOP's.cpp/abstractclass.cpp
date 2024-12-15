#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Abstract class
class Shape
{
protected:
    string name;

public:
    Shape(string n) : name(n) {}

    // Pure virtual function
    virtual double area() const = 0;

    // Virtual function
    virtual void displayDetails() const
    {
        cout << "Shape: " << name << "\n";
    }

    virtual ~Shape() {} // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    double area() const override
    {
        return 3.14 * radius * radius;
    }

    void displayDetails() const override
    {
        Shape::displayDetails();
        cout << "Radius: " << radius << "\nArea: " << area() << "\n";
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    double area() const override
    {
        return length * width;
    }

    void displayDetails() const override
    {
        Shape::displayDetails();
        cout << "Length: " << length << ", Width: " << width << "\nArea: " << area() << "\n";
    }
};

// Derived class: Triangle
class Triangle : public Shape
{
    double base, height;

public:
    Triangle(double b, double h) : Shape("Triangle"), base(b), height(h) {}

    double area() const override
    {
        return 0.5 * base * height;
    }

    void displayDetails() const override
    {
        Shape::displayDetails();
        cout << "Base: " << base << ", Height: " << height << "\nArea: " << area() << "\n";
    }
};

int main()
{  cout<< "Vanshika Aggarwal " << endl;
cout<< "Roll Number: 22001003138" << endl;

    // Array of Shape pointers
    Shape *shapes[] = {
        new Circle(5.0),
        new Rectangle(4.0, 6.0),
        new Triangle(3.0, 7.0)};

    // Display details of all shapes
    for (int i = 0; i < 3; ++i)
    {
        shapes[i]->displayDetails();
        cout << "---------------------\n";
    }

    // Cleanup
    for (int i = 0; i < 3; ++i)
    {
        delete shapes[i];
    }
}

