

#pragma once
#include "Shape.h"
#include <iostream>

namespace DrawingShapes {
    class Rectangle : public DrawingShapes::Shape {
    public:
        void const draw(unsigned num) override;

    };

}