#include "square.h"
#include <iostream>

Square::Square(double x0, double y0, double side0, double angle): x(x0), y(y0), side(side0), angle(angle){}

void Square::translate(double xv, double yv) {
    x += xv;
    y += yv;
}

double Square::area() const {
    return side*side;
}

double Square::perimeter() const {
    return 4.0*side;
}

void Square::show() const {
    std::cout <<"Point A("<<x<<","<<y<<")\n"
              <<"Point B("<<x - side*sin(angle)<<","<<y + side*cos(angle)<<")\n"
              <<"Point C("<<x + side*(cos(angle)-sin(angle))<<","<<y + side*(cos(angle)+sin(angle))<<")\n"
              <<"Point D("<<x + side*cos(angle)<<","<<y + side*sin(angle)<<")\n"
              <<"Side ="<<side<<"\n";
}