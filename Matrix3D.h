#ifndef Matrix3D_h
#define Matrix3D_h

#include "Vector3D.h"

namespace Math {
    struct Matrix3D
    {
        float r0c0;
        float r0c1;
        float r0c2;
        float r1c0;
        float r1c1;
        float r1c2;
        float r2c0;
        float r2c1;
        float r2c2;
    };

    #include "Matrix3D.inl.h"
}


#endif /* Matrix3D_h */