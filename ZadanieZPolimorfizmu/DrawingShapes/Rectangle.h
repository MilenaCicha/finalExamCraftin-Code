

#pragma once
#include "../Shape.h"
#include <iostream>

namespace Rectangle {
    class Rectangle : public Shape::Shape {
    public:
        void draw(unsigned num) override;

    };

}