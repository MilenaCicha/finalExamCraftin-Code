
#pragma once

namespace DrawingShapes {
    class Shape {
        public:
            virtual void draw(unsigned num) const =0;
            virtual ~Shape(){};
    };

}
