#ifndef Matrix2D_h
#define Matrix2D_h

#include "Vector2D.h"

namespace Math {
    struct Matrix2D
    {
        float r0c0;
        float r0c1;
        float r1c0;
        float f1c1;
        
        explicit Matrix2D(float r0c0 = 1, float r0c1 = 0, float r1c0 = 0, float f1c1 = 1) :
        r0c0(r0c0), r0c1(r0c1), r1c0(r1c0), f1c1(f1c1) {}
        
        
    };
}

#endif /* Matrix2D_h */
