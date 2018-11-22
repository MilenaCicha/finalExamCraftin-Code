#pragma once
#include "Shape.h"
#include <iostream>

namespace DrawingShapes {
    class Square : public DrawingShapes::Shape {
        public:
            void draw(unsigned num)const override;
    };

}
