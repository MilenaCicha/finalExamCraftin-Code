
#include "Square.h"

void const DrawingShapes::Square::draw(unsigned num){
    for(int i = 0; i < num; ++i){
        std::cout<<"* * *\n";
        std::cout<<"*   *\n";
        std::cout<<"* * *\n";
    }
}