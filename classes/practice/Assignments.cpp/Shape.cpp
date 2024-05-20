#include <iostream>
using namespace std;

class Shape{
    public:
    virtual double area() const =0;   //pure virtual  function 
    virtual double perimeter() const = 0; //pure virtual function 
};

class Circle :public Shape{
    private:
    double radius;

    public:
    Circle(double r) : radius(r){}
    double area() const override
    {
        return 3.14 * radius * radius;
    } 
    
    double perimeter() const override
    {
        return 2 * 3.14 * radius ;
    }


};

class Rectangle: public Shape {
    private:
    double length;
    double width;

    public:
    Rectangle(double l, double w) : length (l), width(w) {}
    double  area() const override
    {
        return length * width;
    }
    
    double perimeter() const override
    {
        return 2 * length + 2 *width ;
    }

};

int main()
{
    Circle Area(4); //created object from class circle
    Rectangle rectanle(50, 60);   // Craeted object oinstance of a class rectangle
    
    cout << "Area of the cicle is:" << Area.area() << endl;
    cout << "perimeter of Circle is:" << Area.perimeter() << endl;
    cout << "Area of rectangle :" << rectanle.area() << endl;
    cout << "Perimeter of Reactanle:" << rectanle.perimeter() << endl;

}