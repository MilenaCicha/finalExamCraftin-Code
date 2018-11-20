
#include "Rectangle.h"

void const DrawingShapes::Rectangle::draw(unsigned num){
    for(int i = 0; i < num; ++i){
        std::cout<<"* * * *\n";
        std::cout<<"*     *\n";
        std::cout<<"* * * *\n";
    }
}