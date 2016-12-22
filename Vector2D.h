#ifndef Vector2D_h
#define Vector2D_h

namespace Math {
    
    struct Vector2D
    {
        float x;
        float y;
        Vector2D(float x, float y) : x(x), y(y) {}
    };

    inline Vector2D operator+(const Vector2D& left, const Vector2D& right);
    inline Vector2D operator*(float scalar, const Vector2D& vector);
    inline Vector2D operator*(const Vector2D& vector, float scalar);
    
   #include "Vector2D.inl.h"
}

#endif /* Vector2D_h */
