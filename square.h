#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include <cmath>

class Square{
public:
    Square(double x = 0.0, double y = 0.0, double side = 1.0, double angle = 0.);
    //angle between Oy and AB
    void translate(double x, double y);
    double area() const;
    double perimeter() const;
    void show() const;
private:
    double x, y, side, angle;
};


#endif // SQUARE_H_INCLUDED