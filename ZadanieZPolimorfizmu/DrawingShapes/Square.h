#pragma once
#include "Shape.h"
#include <iostream>

namespace DrawingShapes {
class Square : public DrawingShapes::Shape {
public:
        void const draw(unsigned num) override;
    };

}
