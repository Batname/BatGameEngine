#ifndef Vector3D_h
#define Vector3D_h

namespace Math {
    struct Vector3D
    {
        float x;
        float y;
        float z;
        explicit Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f) :
        x(x), y(y), z(z) {}
        
        inline Vector3D operator+=(const Vector3D& right);
        inline Vector3D operator-=(const Vector3D& right);
    };
    
    inline Vector3D operator+(const Vector3D& left, const Vector3D& right);
    inline Vector3D operator*(float scalar, const Vector3D& right);
    inline Vector3D operator*(const Vector3D& right, float scalar);
    
    #include "Vector3D.inl.h"
}

#endif /* Vector3D_h */
