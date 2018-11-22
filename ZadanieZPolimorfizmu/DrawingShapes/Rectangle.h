#pragma once
#include "Shape.h"
#include <iostream>

namespace DrawingShapes {
    class Rectangle : public DrawingShapes::Shape {
        public:
            void draw(unsigned num)const override;
    };

}