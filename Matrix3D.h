#ifndef Matrix3D_h
#define Matrix3D_h

#include "Vector3D.h"

namespace Math {
    typedef float f;
    
    struct Matrix3D
    {
        f r0c0;
        f r0c1;
        f r0c2;
        f r1c0;
        f r1c1;
        f r1c2;
        f r2c0;
        f r2c1;
        f r2c2;
        
        inline explicit Matrix3D(
            f r0c0 = 1, f r0c1 = 0, f r0c2 = 0,
            f r1c0 = 0, f r1c1 = 1, f r1c2 = 0,
            f r2c0 = 0, f r2c1 = 0, f r2c2 = 1
        );
    };

    #include  "Matrix3D.inl.h"
}


#endif /* Matrix3D_h */
