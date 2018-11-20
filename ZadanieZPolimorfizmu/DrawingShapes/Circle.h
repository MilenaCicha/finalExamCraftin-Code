#pragma once
#include "Shape.h"
#include <iostream>

namespace DrawingShapes {
    class Circle : public DrawingShapes::Shape {
    void const draw (unsigned num) override;
    };
}


