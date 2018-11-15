#pragma once
#include "../Shape.h"
#include <iostream>

namespace Square {
class Square : public Shape::Shape {
public:
        void draw(unsigned num) override;
    };

}
