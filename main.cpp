#include "square.h"
#include <iostream>

int main(){
    Square s(1., 2., 3., 0.25*M_PI);
    s.show();
    std::cout<<s.perimeter()<<"\n";
    std::cout<<s.area()<<"\n";
    s.translate(4., 1.);
    s.show();
}
