#ifndef Matrix2D_h
#define Matrix2D_h

#include "Vector2D.h"

namespace Math {
    struct Matrix2D
    {
        float r0c0;
        float r0c1;
        float r1c0;
        float r1c1;
        
        inline explicit Matrix2D(float r0c0 = 1, float r0c1 = 0, float r1c0 = 0, float r1c1 = 1);
    };
    
    inline Vector2D operator*(const Matrix2D& left, const Math::Vector2D& right);
    
    #include "Matrix2D.inl.h"
}

#endif /* Matrix2D_h */
