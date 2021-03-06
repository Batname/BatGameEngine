#ifndef Matrix3D_h
#define Matrix3D_h

#include "Vector3D.h"

namespace Math {
    struct Matrix3D
    {
        float r0c0, r0c1, r0c2;
        float r1c0, r1c1, r1c2;
        float r2c0, r2c1, r2c2;
        
        inline explicit Matrix3D(
            float r0c0 = 1.0f, float r0c1 = 0.0f, float r0c2 = 0.0f,
            float r1c0 = 0.0f, float r1c1 = 1.0f, float r1c2 = 0.0f,
            float r2c0 = 0.0f, float r2c1 = 0.0f, float r2c2 = 1.0f
        );
        inline static Matrix3D rotateZ(float angleInRadians);
};
    
    inline Vector3D operator*(const Matrix3D& matrix, const Math::Vector3D& vector);

    #include  "Matrix3D.inl.h"
}

#endif /* Matrix3D_h */
